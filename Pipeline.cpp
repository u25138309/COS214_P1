#include "Pipeline.h"
#include "RunCheckpoint.h"

//Question 3.1
Pipeline::Pipeline(ConnectorFactory* factory)
    : factory(factory), stage(0){}

Pipeline::~Pipeline()
{
    delete factory;
    for (Transformation* step : steps) {
        delete step;
    }
    steps.clear();
}

void Pipeline::addStep(Transformation* step) {
    if(step != nullptr){
        steps.push_back(step);
    }
}

//Question 3.2
void Pipeline::run(){
    connect();
    extract();
    transform();
    load();
}

void Pipeline::connect(){
    if(factory != nullptr){
        ConnectorFactory* connector = factory->createConnector();
        if(connector != nullptr){
            std::cout << "Connecting to " << connector->getSource() << std::endl;
            delete connector;
        }
    }
    stage = 1;
}

void Pipeline::transform(){
    for(Transformation* step : steps){
        if(step != nullptr){
            records = step->apply(records);
        }
    }
    stage = 3;
}


//Question 4.2
RunCheckpoint* Pipeline::createCheckpoint(){
    return new RunCheckpoint(stage, records);
}

void Pipeline::restore(RunCheckpoint* cp){
    if(cp != nullptr){
        this->stage = cp->getStage();
        this->records = cp->getRecords();
    }
}