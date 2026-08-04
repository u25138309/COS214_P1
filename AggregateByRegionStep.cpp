#include <string>
#include <vector>

#include "AggregateByRegionStep.h"

using namespace std;

AggregateByRegionStep::AggregateByRegionStep() : Transformation("aggregate") {}

Transformation* AggregateByRegionStep::clone() {
    return new AggregateByRegionStep();
}

vector<string> AggregateByRegionStep::apply(vector<string> records) {
    vector<string> result;
    result.push_back("COUNT=" + to_string(records.size()));
    return result;
}