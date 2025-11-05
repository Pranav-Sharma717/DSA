#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

bool isValid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m &&
           (grid[x][y] == 'C' || grid[x][y] == 'R') && !visited[x][y];
}

int bfs()
{
    int flips = 0;
    visited.assign(n, vector<bool>(m, false));
    queue<pair<int, int>> q;

    // Push all edge cable entry points
    for (int i = 0; i < n; i++)
    {
        if (grid[i][0] == 'C' || grid[i][0] == 'R')
            q.push({i, 0});
        if (grid[i][m - 1] == 'C' || grid[i][m - 1] == 'R')
            q.push({i, m - 1});
    }
    for (int j = 0; j < m; j++)
    {
        if (grid[0][j] == 'C' || grid[0][j] == 'R')
            q.push({0, j});
        if (grid[n - 1][j] == 'C' || grid[n - 1][j] == 'R')
            q.push({n - 1, j});
    }

    // 4 directions
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    while (!q.empty())
    {
        auto p = q.front();
        int x = p.first;
        int y = p.second;
        q.pop();
        if (visited[x][y])
            continue;
        visited[x][y] = true;

        if (grid[x][y] == 'R')
            flips++;

        for (int d = 0; d < 4; d++)
        {
            int nx = x + dx[d], ny = y + dy[d];
            if (isValid(nx, ny))
            {
                q.push({nx, ny});
            }
        }
    }

    return flips;
}

int main()
{
    cin >> n >> m;
    grid.resize(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];

    cout << bfs() << endl;
    return 0;
}
