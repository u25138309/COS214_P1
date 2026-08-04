#ifndef DEDUPLICATESTEP_H
#define DEDUPLICATESTEP_H

#include <string>
#include <vector>

#include "Transformation.h"

using namespace std;

class DeduplicateStep : public Transformation {
    public:
        DeduplicateStep();
        Transformation* clone();
        vector<string> apply(vector<string>) override;
};

#endif
