#ifndef RESTAPICONNECTOR_H
#define RESTAPICONNECTOR_H

#include "Connector.h"

#include <vector>
#include <string>

using namespace std;

class RestApiConnector : public Connector {
	using Connector::Connector("restapi");
	public:
		vector<string> extract() override;
};

#endif