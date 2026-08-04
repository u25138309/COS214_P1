all:
	g++ -std=c++11 -Wall -c Connector.cpp -o Connector.o
	g++ -std=c++11 -Wall -c PostgresConnector.cpp -o PostgresConnector.o
	g++ -std=c++11 -Wall -c RestApiConnector.cpp -o RestApiConnector.o
	g++ -std=c++11 -Wall -c CsvConnector.cpp -o CsvConnector.o
	g++ -std=c++11 -Wall -c ConnectorFactory.cpp -o ConnectorFactory.o
	g++ -std=c++11 -Wall -c PostgresFactory.cpp -o PostgresFactory.o
	g++ -std=c++11 -Wall -c RestApiFactory.cpp -o RestApiFactory.o
	g++ -std=c++11 -Wall -c CsvFactory.cpp -o CsvFactory.o
	g++ -std=c++11 -Wall -c Transformation.cpp -o Transformation.o
	g++ -std=c++11 -Wall -c DeduplecateStep.cpp -o DeduplecateStep.o
	g++ -std=c++11 -Wall -c AggregateByRegionStep.cpp -o AggregateByRegionStep.o
	g++ -std=c++11 -Wall -c TransformationRegistry.cpp -o TransformationRegistry.o
	g++ -std=c++11 -Wall -c Pipeline.cpp -o Pipeline.o
	g++ -std=c++11 -Wall -c RunCheckpoint.cpp -o RunCheckpoint.o
	g++ -std=c++11 -Wall -c CheckpointManager.cpp -o CheckpointManager.o
	g++ -std=c++11 -Wall -c main.cpp -o main.o
	g++ main.o Connector.o PostgresConnector.o RestApiConnector.o CsvConnector.o ConnectorFactory.o PostgresFactory.o RestApiFactory.o CsvFactory.o Transformation.o DeduplecateStep.o AggregateByRegionStep.o TransformationRegistry.o Pipeline.o RunCheckpoint.o CheckpointManager.o -o engine

run: all
	./engine

clean:
	rm -f *.o engine