#ifndef POSTGRESCONNECTOR_H
#define POSTGRESCONNECTOR_H

#include "Connector.h"

#include <vector>
#include <string>

using namespace std;

class PostgresConnector : public Connector {
	public:
		PostgresConnector();
		vector<string> extract() override;
};

#endif