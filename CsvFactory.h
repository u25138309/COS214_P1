#ifndef CSVFACTORY_H
#define CSVFACTORY_H

#include <vector>
#include <string>

#include "Connector.h"
#include "ConnectorFactory.h"

using namespace std;

class CsvFactory : public ConnectorFactory {
	using ConnectorFactory::ConnectorFactory;
	public:
		Connector* createConnector();
};

#endif