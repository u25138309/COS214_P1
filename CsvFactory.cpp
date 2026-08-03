#include <vector>
#include <string>

#include "CsvFactory.h"
#include "CsvConnector.h"

using namespace std;

Connector* CsvFactory::createConnector() {
    return new CsvConnector();
}