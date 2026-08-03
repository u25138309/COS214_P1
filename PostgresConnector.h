#ifndef POSTGRESCONNECTOR_H
#define POSTGRESCONNECTOR_H

#include "Connector.h"

#include <vector>
#include <string>

using namespace std;

class PostgresConnector : public Connector {
	using Connector::Connector("postgres");
	public:
		vector<string> extract() override;
};

#endif