#include "RunCheckpoint.h"

//Question 4.1
RunCheckpoint::RunCheckpoint(int stage, const std::vector<std::string> records)
    : stage(stage), records(records) {}

int RunCheckpoint::getStage(){
    return stage;
}

std::vector<std::string> RunCheckpoint::getRecords(){
    return records;
}