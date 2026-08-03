#include "RestApiConnector.h"

#include <vector>
#include <string>

using namespace std;

vector<string> RestApiConnector::extract() {
	vector<string> result;
	result.push_back("API:44");
	result.push_back("PG:002");
	result.push_back("PG:002");
	result.push_back("PG:003");
	return result;
}