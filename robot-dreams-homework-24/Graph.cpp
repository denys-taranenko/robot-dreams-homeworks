#include <iostream>
#include <unordered_set>

#include "Graph.h"


GraphAdjList::GraphAdjList(int Vertixes, ConnectionType type)
	: Graph(Vertixes, type)
{
	m_list.resize(Vertixes);
}


void GraphAdjList::addEdge(int v, int w)
{
	//Check if w is not already in the list of v
	m_list[v].push_back(w);

	if (m_connectionType == ConnectionType::undirected)
	{
		m_list[w].push_back(v);
	}
}


void GraphAdjList::BFS(int vertex)
{
	// Mark all the vertices as not visited
	std::unordered_set<int> visited;
	std::list<int> queue;

	// Mark the current node as visited and enqueue it
	visited.insert(vertex);
	queue.push_back(vertex);

	while (!queue.empty())
	{
		// Dequeue a vertex from queue and print it
		int currentVertex = queue.front();
		std::cout << currentVertex << " ";  //Or make anything else with it: push to vector, string, another object, whatever
		queue.pop_front();

		// Get all adjacent vertices
		for (int adjacent : m_list[currentVertex])
		{
			if (!visited.count(adjacent))
			{
				visited.insert(adjacent);
				queue.push_back(adjacent);
			}
		}
	}
}


int GraphAdjList::numberOfNodesInLevel(int level)
{
    if (level < 0 || level >= m_vertixes)
        return 0;

    int count = 0;
    std::vector<bool> visited(m_vertixes, false);
    std::list<int> queue;

    visited[0] = true;
    queue.push_back(0);

    while (!queue.empty() && level > 0)
    {
        int size = queue.size();

        for (int i = 0; i < size; i++)
        {
            int currentVertex = queue.front();
            queue.pop_front();

            for (int adjacent : m_list[currentVertex])
            {
                if (!visited[adjacent])
                {
                    visited[adjacent] = true;
                    queue.push_back(adjacent);
                }
            }
        }

        level--;
    }

    count = queue.size();
    return count;
}


bool GraphAdjList::isStronglyConnected() const
{
    for (int i = 0; i < m_vertixes; i++)
    {
        std::vector<bool> visited(m_vertixes, false);
        std::list<int> stack;
        stack.push_back(i);

        while (!stack.empty())
        {
            int currentVertex = stack.back();
            stack.pop_back();

            if (!visited[currentVertex])
            {
                visited[currentVertex] = true;

                for (int adjacent : m_list[currentVertex])
                {
                    if (!visited[adjacent])
                        stack.push_back(adjacent);
                }
            }
        }

        for (bool visit : visited)
        {
            if (!visit)
                return false;
        }
    }

    return true;
}


void GraphAdjMatrix::addEdge(int v, int w)
{
    if (v >= 0 && v < m_vertixes && w >= 0 && w < m_vertixes)
    {
        m_matrix[v][w] = 1;

        if (m_connectionType == ConnectionType::undirected)
        {
            m_matrix[w][v] = 1;
        }
    }
}


void GraphAdjMatrix::DFS(int vertex)
{
    std::vector<bool> visited(m_vertixes, false);
    DFSUtil(vertex, visited);
}

void GraphAdjMatrix::DFSUtil(int vertex, std::vector<bool>& visited)
{
    visited[vertex] = true;
    std::cout << vertex << " ";

    for (int i = 0; i < m_vertixes; ++i)
    {
        if (m_matrix[vertex][i] && !visited[i])
        {
            DFSUtil(i, visited);
        }
    }
}