#include "PostgresConnector.h"

#include <vector>
#include <string>

using namespace std;

PostgresConnector::PostgresConnector() : Connector("postgres") {};

vector<string> PostgresConnector::extract() {
    vector<string> result;
    result.push_back("PG:001");
    result.push_back("PG:002");
    result.push_back("PG:002");
    result.push_back("PG:003");
    return result;
}