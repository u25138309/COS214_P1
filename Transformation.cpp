#include <string>
#include <vector>

#include "Transformation.h"

using namespace std;

Transformation::Transformation(string name) {
    this->name = name;
}
string Transformation::getName() {
    return name;
}

Transformation::~Transformation() {
    //ble
}