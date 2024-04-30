// #include <iostream>
// #include <queue>
// #include <vector>
// #include <algorithm>
#include <bits/stdc++.h>

using namespace std;
// 정점 여러개 -> 정점번호 작은 것부터 방문 (1~N)
// DFS, BFS
// N,M,V 입력, M개의 간선 부여

vector<bool> visited_check;
vector<vector<int>> line;

void dfs(int v)
{
    // 현재 정점 출력 후 visit 체크 -> visit 체크되면 정점 이동 시 빼기
    cout << v << " ";
    visited_check[v] = true;

    for (int i = 0; i < line[v].size(); i++)
    {
        int next_N = 0;
        next_N = line[v][i];
        // *** next_N이 다음 정점인데 i번째 정점이라고 해서 오류
        // -> 계속 똑같은 정점을 반복하고 있었다. ***
        // if (!visited_check[i])
        if (visited_check[next_N] == false)
        {
            dfs(next_N);
        }
    }
}
// bfs는 queue 자료구조 사용 -> depth별 출력
queue<int> que;
void bfs(int v)
{
    que.push(v);
    visited_check[v] = true;

    while (!que.empty())
    {
        int current = que.front();
        que.pop();
        cout << current << " ";
        for (int i = 0; i < line[current].size(); i++)
        {
            int next_que = line[current][i];
            if (!visited_check[next_que])
            {
                que.push(next_que);
                visited_check[next_que] = true;
            }
        }
    }
}
int main()
{
    int N, M, V;
    cin >> N >> M >> V;

    // 간선 입력
    // false로 초기화 후 시작
    // 간선 오름차순 정렬
    visited_check.resize(N + 1, false);
    line.resize(N + 1);
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        // 1 5 간선 == 5 1 간선
        line[a].push_back(b);
        line[b].push_back(a);
    }
    // 간선 입력 순서에 따르므로 sort해서 순서없애기
    for (int i = 0; i < line.size(); i++)
    {
        sort(line[i].begin(), line[i].end());
    }

    // 정점 시작 시점 매개변수
    dfs(V);
    cout << endl;
    // *** dfs를 돌고 나면 visited_check를 false로 초기화 해줘야한다 ***
    fill(visited_check.begin(), visited_check.end(), false);
    bfs(V);

    return 0;
}
