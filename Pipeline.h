#ifndef PIPELINE_H
#define PIPELINE_H

#include <vector>
#include <string>
#include <iostream>
#include "ConnectorFactory.h"
#include "Connector.h"
#include "Transformation.h"

class RunCheckpoint;

class Pipeline {
protected:
    ConnectorFactory* factory;
    std::vector<Transformation*> steps;
    int stage;
    std::vector<std::string> records;

protected:
    void connect();
    virtual void extract() = 0;
    void transform();
    virtual void load() = 0;

public:
    Pipeline(ConnectorFactory*);
    void run(); //Don't forget to make static
    void addStep(Transformation*);
    RunCheckpoint* createCheckpoint();
    void restore(RunCheckpoint*);
    virtual ~Pipeline();

};

#endif