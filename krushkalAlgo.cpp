#include <iostream>
#include <vector>
#include <algorithm>

// Structure to represent an edge
struct Edge
{
    char vertex1;
    char vertex2;
    int weight;
};

// Structure to represent a disjoint set
struct DisjointSet
{
    std::vector<char> parent;
    std::vector<int> rank;

    DisjointSet(int size) : parent(size), rank(size, 0)
    {
        for (int i = 0; i < size; i++)
        {
            parent[i] = 'A' + i;
        }
    }

    // Find the root of a vertex
    char find(char vertex)
    {
        if (parent[vertex - 'A'] != vertex)
        {
            parent[vertex - 'A'] = find(parent[vertex - 'A']);
        }
        return parent[vertex - 'A'];
    }

    // Union two vertices
    void unionSet(char vertex1, char vertex2)
    {
        char root1 = find(vertex1);
        char root2 = find(vertex2);

        if (root1 != root2)
        {
            if (rank[root1 - 'A'] > rank[root2 - 'A'])
            {
                parent[root2 - 'A'] = root1;
            }
            else
            {
                parent[root1 - 'A'] = root2;
                if (rank[root1 - 'A'] == rank[root2 - 'A'])
                {
                    rank[root2 - 'A']++;
                }
            }
        }
    }
};

// Function to compute the minimum spanning tree using Kruskal's algorithm
std::vector<Edge> kruskal(std::vector<Edge> &edges, int numVertices)
{
    std::vector<Edge> mst;
    DisjointSet disjointSet(numVertices);

    // Sort edges by weight
    std::sort(edges.begin(), edges.end(), [](const Edge &e1, const Edge &e2)
              { return e1.weight < e2.weight; });

    for (const Edge &edge : edges)
    {
        if (disjointSet.find(edge.vertex1) != disjointSet.find(edge.vertex2))
        {
            mst.push_back(edge);
            disjointSet.unionSet(edge.vertex1, edge.vertex2);
        }
    }

    return mst;
}

int main()
{
    int numVertices = 6;
    std::vector<Edge> edges = {
        {'A', 'B', 1},
        {'A', 'C', 5},
        {'B', 'C', 2},
        {'B', 'D', 1},
        {'C', 'D', 3},
        {'C', 'E', 1},
        {'D', 'E', 1},
        {'D', 'F', 5},
        {'E', 'F', 1}};

    std::vector<Edge> mst = kruskal(edges, numVertices);

    std::cout << "Minimum Spanning Tree:" << std::endl;
    for (const Edge &edge : mst)
    {
        std::cout << "(" << edge.vertex1 << ", " << edge.vertex2 << ", " << edge.weight << ")" << std::endl;
    }

    return 0;
}