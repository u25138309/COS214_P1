#include <string>
#include <vector>
#include <map>

#include "TransformationRegistry.h"

using namespace std;

void TransformationRegistry::registerStep(string key, Transformation* transformation) {
    if (prototypes.find(key) != prototypes.end()) {
        delete prototypes[key];
    }
    prototypes[key] = transformation;
}

Transformation* TransformationRegistry::create(string key) {
    if (prototypes.find(key) == prototypes.end()) {
        return nullptr;
    }
    return prototypes[key]->clone();
}

TransformationRegistry::~TransformationRegistry() {
    for (auto iter = prototypes.begin(); iter != prototypes.end(); ++iter) {
        delete iter->second;
    }
}