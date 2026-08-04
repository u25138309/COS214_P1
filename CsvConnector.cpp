#include "CsvConnector.h"

#include <vector>
#include <string>

using namespace std;

CsvConnector::CsvConnector() : Connector("csv") {};

vector<string> CsvConnector::extract() {
	vector<string> result;
	result.push_back("CSV:x1");
	result.push_back("CSV:x2");
	result.push_back("CSV:x3");
	result.push_back("CSV:x3");
	return result;
}