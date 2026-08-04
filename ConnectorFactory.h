#ifndef CONNECTORFACTORY_H
#define CONNECTORFACTORY_H

#include <vector>
#include <string>

#include "Connector.h"

using namespace std;

class ConnectorFactory {
	public:
		virtual Connector* createConnector() = 0;
		virtual ~ConnectorFactory();
};

#endif