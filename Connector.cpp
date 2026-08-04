#include "Connector.h"

#include <vector>
#include <string>

using namespace std;

Connector::Connector(string source) {
	this->source = source;
}

string Connector::getSource() {
	return source;
}

Connector::~Connector() {
	//ble
}