#ifndef TRANSFORMATIONREGISTRY_H
#define TRANSFORMATIONREGISTRY_H

#include <string>
#include <vector>
#include <map>

#include "Transformation.h"

using namespace std;

class TransformationRegistry {
    private:
        map<string, Transformation*> prototypes;
    public:
        void registerStep(string, Transformation*);
        Transformation* create(string);
        ~TransformationRegistry();
};

#endif
