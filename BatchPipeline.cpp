#include "Pipeline.h"
#include "BatchPipeline.h"
#include "ConnectorFactory.h"
#include "Connector.h"
#include "Transformation.h"

//Question 3.3
void BatchPipeline::extract(){
    if(factory != nullptr){
        ConnectorFactory* connector = factory->createConnector();
        if(connector != nullptr){
            records = connector->extract();
            delete connector;
        }
        std::cout << "Batch extract: " << records.size() << " records" << std::endl;
        stage = 2;
    }
}

void BatchPipeline::load() {
    std::cout << "Batch load: " << records.size() << " records written" << std::endl;
    stage = 4;
}