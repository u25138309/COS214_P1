#ifndef RESTAPIFACTORY_H
#define RESTAPIFACTORY_H

#include <vector>
#include <string>

#include "ConnectorFactory.h"

using namespace std;

class RestApiFactory : public ConnectorFactory {
	using ConnectorFactory::ConnectorFactory;
	public:
		Connector* createConnector() override;
};

#endif