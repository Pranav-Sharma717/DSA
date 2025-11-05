#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

set<pair<int, int>> readEdges(int E)
{
    set<pair<int, int>> edges;
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        if (u > v)
            swap(u, v);
        edges.insert({u, v});
    }
    return edges;
}

void dfs(int node, map<int, vector<int>> &adj, set<int> &visited)
{
    visited.insert(node);
    for (int nei : adj[node])
    {
        if (!visited.count(nei))
        {
            dfs(nei, adj, visited);
        }
    }
}

int main()
{
    int E;
    cin >> E;

    set<pair<int, int>> initial = readEdges(E);
    set<pair<int, int>> target = readEdges(E);

    // symmetric difference
    set<pair<int, int>> diff;
    for (auto &e : initial)
        if (!target.count(e))
            diff.insert(e);
    for (auto &e : target)
        if (!initial.count(e))
            diff.insert(e);

    // Build adjacency list for the diff edges
    map<int, vector<int>> adj;
    for (auto &[u, v] : diff)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Count connected components → each component is a simple cycle
    set<int> visited;
    int cycles = 0;
    for (auto &[node, _] : adj)
    {
        if (!visited.count(node))
        {
            dfs(node, adj, visited);
            cycles++;
        }
    }

    cout << cycles << endl;
    return 0;
}
