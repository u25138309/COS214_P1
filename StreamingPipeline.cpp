#include "Pipeline.h"
#include "StreamingPipeline.h"
#include "ConnectorFactory.h"
#include "Connector.h"
#include "Transformation.h"

//Question 3.4
void StreamingPipeline::extract(){
    if(factory != nullptr){
        ConnectorFactory* connector = factory->createConnector();
        if(connector != nullptr){
            records = connector->extract();
            delete connector;
        }
        std::cout << "Streaming extract: " << records.size() << " records" << std::endl;
        stage = 2;
    }
}

void StreamingPipeline::load(){
    std::cout << "Streaming load: " << records.size() << " records written" << std::endl;
    stage = 4;
}