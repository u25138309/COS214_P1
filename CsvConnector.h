#ifndef CSVCONNECTOR_H
#define CSVCONNECTOR_H

#include "Connector.h"

#include <vector>
#include <string>

using namespace std;

class CsvConnector : public Connector {
	using Connector::Connector("csv");
	public:
		vector<string> extract() override;
};

#endif