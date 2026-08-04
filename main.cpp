#include <iostream>

#include "Connector.h"
#include "ConnectorFactory.h"
#include "PostgresFactory.h"
#include "RestApiFactory.h"
#include "CsvFactory.h"

#include "Transformation.h"
#include "DeduplecateStep.h"
#include "AggregateByRegionStep.h"
#include "TransformationRegistry.h"

#include "Pipeline.h"

#include "RunCheckpoint.h"
#include "CheckpointManager.h"

int main() {
    // Step 1: Create registry and register steps
    TransformationRegistry registry;
    registry.registerStep("dedup", new DeduplicateStep());
    registry.registerStep("aggregate", new AggregateByRegionStep());

    // Step 2: Create BatchPipeline with a PostgresFactory
    Pipeline* pipeline = new BatchPipeline(new PostgresFactory());

    // Step 3: Add cloned "dedup" and "aggregate" steps from registry
    pipeline->addStep(registry.create("dedup"));
    pipeline->addStep(registry.create("aggregate"));

    // Step 4: Create CheckpointManager
    CheckpointManager manager;

    // Step 5: Call run(), create a checkpoint, and save it
    pipeline->run();
    RunCheckpoint* cp = pipeline->createCheckpoint();
    manager.save(cp);

    // Step 6: Delete what you own (pipeline destructor handles factory & steps)
    delete pipeline;

    return 0;
}