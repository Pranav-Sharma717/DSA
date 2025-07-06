#include <iostream>
#include <list>
#include <map>
using namespace std;

// Class to represent a graph
class Graph
{
private:
    // Map to store adjacency list for each node
    map<char, list<char>> adjList;

public:
    // Function to add an edge to the graph
    void addEdge(char u, char v)
    {
        adjList[u].push_back(v);
        adjList[v].push_back(u); // Assuming it's an undirected graph
    }

    // Function to print the adjacency list of the graph
    void printGraph()
    {
        for (auto node : adjList)
        {
            cout << node.first << ": ";
            for (char adj : node.second)
            {
                cout << adj << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    // Create a graph object
    Graph g;

    // Add edges to the graph
    g.addEdge('a', 'b');
    g.addEdge('a', 'c');
    g.addEdge('b', 'd');
    g.addEdge('c', 'd');
    g.addEdge('d', 'e');
    g.addEdge('e', 'a');

    // Print the adjacency list of the graph
    g.printGraph();

    return 0;
}
