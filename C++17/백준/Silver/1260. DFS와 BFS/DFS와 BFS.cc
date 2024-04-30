#include <bits/stdc++.h>

using namespace std;
// 시작 정점을 매개변수 -> 시작정점을 stack, queue에 넣고 시작
// DFS recursion
// 1. 시작 정점 출력 2. 방문 정점 표시(bool) 3. 현재 정점에 연결된 정점 중 하나 선택(vector<int> size) -> 앞부분부터
// 4. 선택된 정점이 이미 방문 정점이면 다음 연결된 정점 선택

vector<bool> visited;      // 정점 방문 여부를 저장하는 배열
vector<vector<int>> graph; // 그래프를 나타내는 인접 리스트
queue<int> q;              // BFS를 위한 큐

void DFS(int v)
{
    cout << v << " ";  // 현재 정점 출력
    visited[v] = true; // 현재 정점 방문 표시

    // 현재 정점과 연결된 모든 정점에 대해
    for (int i = 0; i < graph[v].size(); ++i)
    {
        int next = graph[v][i]; // 다음 정점
        // 다음 정점을 방문하지 않았다면 재귀적으로 DFS 호출
        if (!visited[next])
        {
            DFS(next);
        }
    }
}

void BFS(int v)
{
    q.push(v);         // 시작 정점을 큐에 넣음
    visited[v] = true; // 시작 정점 방문 표시

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        cout << cur << " ";

        for (int i = 0; i < graph[cur].size(); i++)
        {
            int next = graph[cur][i];
            if (!visited[next])
            {
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main()
{
    int N, M, V; // 정점의 개수, 간선의 개수, 시작 정점 번호
    cin >> N >> M >> V;

    // 정점 0은 존재 x -> 1부터니까 n+1사이즈 사용
    visited.resize(N + 1, false); // 방문 배열 초기화
    graph.resize(N + 1);          // 그래프 초기화

    // 그래프 입력 받기
    for (int i = 0; i < M; ++i)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a); // 양방향 간선이므로 반대 방향도 추가
    }

    // ***정점,간선 집어넣는 입력 순서 중요 -> sort
    for (int i = 0; i < graph.size(); i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    DFS(V);
    cout << endl;
    // 방문 배열 초기화
    fill(visited.begin(), visited.end(), false);
    BFS(V);
    cout << endl;

    return 0;
}
