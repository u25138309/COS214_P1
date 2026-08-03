#ifndef CONNECTOR_H
#define CONNECTOR_H

#include <vector>
#include <string>

using namespace std;

class Connector {
	protected:
		string source;
	public:
		Connector(string);
		virtual vector<string> extract() = 0;
		string getSource();
		virtual ~Connector();
};

#endif