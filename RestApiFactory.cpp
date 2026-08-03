#include <vector>
#include <string>

#include "RestApiFactory.h"
#include "RestApiConnector.h"

using namespace std;

Connector* RestApiFactory::createConnector() {
    return new RestApiConnector();
}