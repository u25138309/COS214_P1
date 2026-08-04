#include "RestApiConnector.h"

#include <vector>
#include <string>

using namespace std;

RestApiConnector::RestApiConnector() : Connector("restapi") {};

vector<string> RestApiConnector::extract() {
	vector<string> result;
	result.push_back("API:44");
	result.push_back("API:45");
	result.push_back("API:45");
	return result;
}