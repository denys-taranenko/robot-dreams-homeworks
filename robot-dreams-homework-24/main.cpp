#include <iostream>

#include "Graph.h"

//#define TIME_LOG_ENABLED
int getTime() { return 1; }

int main()
{
	GraphAdjList graph(10);

	graph.addEdge(0, 1);
	graph.addEdge(0, 2);
	graph.addEdge(0, 3);

	graph.addEdge(1, 4);
	graph.addEdge(2, 5);
	graph.addEdge(2, 6);
	graph.addEdge(3, 7);

	graph.addEdge(4, 8);
	graph.addEdge(5, 9);
	
	
	int level = 2;
	int nodesInLevel = graph.numberOfNodesInLevel(level);
	std::cout << "Number of nodes in level " << level << ": " << nodesInLevel << std::endl;

	bool isConnectedList = graph.isStronglyConnected();
	std::cout << "Is the graph (GraphAdjList) strongly connected: " << (isConnectedList ? "Yes" : "No") << std::endl;

	std::cout << "BFS traversal: ";
	graph.BFS();
	std::cout << std::endl;

	GraphAdjMatrix graphMatrix(10);

	graphMatrix.addEdge(0, 1);
	graphMatrix.addEdge(0, 2);
	graphMatrix.addEdge(0, 3);

	graphMatrix.addEdge(1, 4);
	graphMatrix.addEdge(2, 5);
	graphMatrix.addEdge(2, 6);
	graphMatrix.addEdge(3, 7);

	std::cout << "DFS traversal for GraphAdjMatrix: ";
	graphMatrix.DFS();
	std::cout << std::endl;

	return 0;

#ifdef TIME_LOG_ENABLED
	int startTime = getTime();
#endif

	graph.BFS();

#ifdef TIME_LOG_ENABLED
	int endTime = getTime();
	int diff = endTime - startTime;
	std::cout << "Time used for BFS: " << diff << std::endl;
#endif

}