#include <bits/stdc++.h>

using namespace std;

int N, M;
queue<pair<int, int>> q;
// ** vector 범위 지정 -> seg fault의 원인
vector<vector<int>> dist(101, vector<int>(101));
vector<vector<int>> maze(101, vector<int>(101));

// 상하좌우
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

void bfs(int y, int x)
{
    q.push({0, 0}); // 시작 지점을 큐에 넣음
    dist[0][0] = 1; // 시작 지점(1,1)의 최단 거리는 1로 설정

    while (!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();

        // 현재 위치에서 상하좌우로 이동하면서 탐색
        for (int i = 0; i < 4; ++i)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (ny < 0 || ny >= N || nx < 0 || nx >= M)
            {
                continue;
            }
            if (maze[ny][nx] == 0)
            {
                continue;
            }
            if (dist[ny][nx])
            {
                continue;
            }

            dist[ny][nx] = dist[y][x] + 1;
            q.push({ny, nx});
        }
    }

    cout << dist[N - 1][M - 1];
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < M; j++)
        {
            maze[i][j] = s[j] - '0';
        }
    }

    bfs(N, M);

    return 0;
}
