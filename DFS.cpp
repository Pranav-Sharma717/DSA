#include <iostream>
#include <list>

using namespace std;

class Graph
{
    int V;                               // Number of vertices
    list<int> *adj;                      // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[]); // A function used by DFS

public:
    Graph(int V);               // Constructor
    void addEdge(int v, int w); // Function to add an edge to the graph
    void DFS(int v);            // Function to perform DFS starting from vertex v
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " ";

    // Recur for all the vertices adjacent to this vertex
    for (auto adjVertex : adj[v])
    {
        if (!visited[adjVertex])
        {
            DFSUtil(adjVertex, visited);
        }
    }
}

void Graph::DFS(int v)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    // Call the recursive helper function to print DFS traversal
    DFSUtil(v, visited);
}

int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Depth First Traversal (starting from vertex 2): ";
    g.DFS(2);

    return 0;
}
