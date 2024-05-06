#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<vector<int>> graph;
queue<int> q;
// stack, recursion, visit check,
void dfs(int v)
{
    cout << v << " ";
    visited[v] = true;

    for (int i = 0; i < graph[v].size(); i++)
    {
        int next = graph[v][i];
        if (!visited[next])
        {
            dfs(next);
        }
    }
}

// queue
void bfs(int v)
{
    q.push(v);
    visited[v] = true;

    while (!q.empty())
    {
        // 현재 노드 지정 후 출력
        int current = q.front();
        q.pop();
        cout << current << " ";

        // 현재 노드 기준으로 연결된 노드를 찾아야 한다
        // for (int i = 0; i < graph[v].size(); i++) x
        for (int i = 0; i < graph[current].size(); i++)
        {
            int next = graph[current][i];
            if (!visited[next])
            {
                // queue의 앞부분에 push
                q.push(next);
                visited[next] = true;
            }
        }
    }
}
int main()
{
    int n, m, v;
    cin >> n >> m >> v;
    graph.resize(n + 1);
    visited.resize(n + 1, false);
    for (int i = 0; i < m; i++)
    {
        int a, b = 0;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i = 0; i < graph.size(); i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }
    dfs(v);
    cout << "\n";
    fill(visited.begin(), visited.end(), false);
    bfs(v);
    return 0;
}
