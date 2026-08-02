#include "CheckpointManager.h"

//Question 4.3
CheckpointManager::~CheckpointManager(){
    for(RunCheckpoint* cp : history){
        delete cp;
    }
    history.clear();
}

void CheckpointManager::save(RunCheckpoint* cp) {
    if(cp != nullptr){
        history.push_back(cp);
    }
}

RunCheckpoint* CheckpointManager::undo(){
    if(history.empty()){
        return nullptr;
    }
    RunCheckpoint* cp = history.back();
    history.pop_back();
    return cp;
}