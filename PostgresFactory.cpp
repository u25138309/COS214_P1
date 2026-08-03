#include <vector>
#include <string>

#include "PostgresFactory.h"
#include "PostgresConnector.h"

using namespace std;

Connector* PostgresFactory::createConnector() {
    return new PostgresConnector();
}