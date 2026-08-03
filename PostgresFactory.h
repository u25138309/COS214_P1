#ifndef POSTGRESFACTORY_H
#define POSTGRESFACTORY_H

#include <vector>
#include <string>

#include "ConnectorFactory.h"

using namespace std;

class PostgresFactory : public ConnectorFactory {
	using ConnectorFactory::ConnectorFactory();
	public:
		Connector* createConnector() override;
};

#endif