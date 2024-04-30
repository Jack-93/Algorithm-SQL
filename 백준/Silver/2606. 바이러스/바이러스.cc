#include <iostream>
#include <vector>
#include <queue>

using namespace std;
// number of computer , number of line
int n, m;
// bfs queue
queue<int> q;
// storage for line
vector<vector<int>> line;
vector<bool> visited;

// genernal bfs + vertex "1" start, next vertex = line[1][?]
void bfs()
{
    // counting except "1"
    int count = 0;
    q.push(1);
    visited[1] = true;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        // cout << cur << " ";
        for (int i = 0; i < line[cur].size(); i++)
        {
            int next = line[cur][i];
            if (!visited[next])
            {
                q.push(next);
                visited[next] = true;
                count++;
            }
        }
    }
    cout << count;
}
int main()
{
    cin >> n >> m;
    line.resize(n + 1);
    visited.resize(n + 1, false);
    // bi-path graph, sort X
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        line[a].push_back(b);
        line[b].push_back(a);
    }
    bfs();
    return 0;
}
