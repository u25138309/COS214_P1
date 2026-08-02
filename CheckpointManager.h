#ifndef CHECKPOINTMANAGER_H
#define CHECKPOINTMANAGER_H

#include <vector>
#include "RunCheckpoint.h"

class CheckpointManager {
private:
    std::vector<RunCheckpoint*> history;

public:
    CheckpointManager() = default;
    void save(RunCheckpoint*);
    RunCheckpoint* undo();
    ~CheckpointManager();
};

#endif