#include <string>
#include <vector>

#include "DeduplicateStep.h"

using namespace std;

DeduplicateStep::DeduplicateStep() : Transformation("dedup") {}

Transformation* DeduplicateStep::clone() {
    return new DeduplicateStep();
}

vector<string> DeduplicateStep::apply(vector<string> records) {
    vector<string> result;

    if(records.empty()) {
        return result;
    }
    result.push_back(records[0]);
    for(size_t i = 1; i < records.size(); i++)
    {
        if(records[i] != records[i - 1])
        {
            result.push_back(records[i]);
        }
    }

    return result;
}