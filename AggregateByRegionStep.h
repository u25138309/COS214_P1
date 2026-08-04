#ifndef AGGREGATEBYREGIONSTEP_H
#define AGGREGATEBYREGIONSTEP_H

#include <string>
#include <vector>

#include "Transformation.h"

using namespace std;

class AggregateByRegionStep : public Transformation {
    public:
        AggregateByRegionStep();
        Transformation* clone();
        vector<string> apply(vector<string>) override;
};

#endif
