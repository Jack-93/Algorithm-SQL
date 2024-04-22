#include <bits/stdc++.h>

using namespace std;
// x x x
// x x x
// x x x -> 0층 i호 = i명
// k= 층, n= 호수

// segmentation fault, for문 초기화에 집중
int main()
{
    int T;
    int k, n;
    cin >> T;

    vector<vector<int>> people(15, vector<int>(15, 0));
    // 0층 초기값
    for (int i = 0; i <= 14; i++)
    {
        people[i][1] = 1;
        people[0][i] = i;
    }
    // n=층, k=호수, 102호부터 계산
    for (int i = 1; i <= 14; i++)
    {
        for (int j = 2; j <= 14; j++)
        {
            people[i][j] = people[i][j - 1] + people[i - 1][j];
        }
    }
    for (int i = 0; i < T; i++)
    {
        cin >> k >> n;
        cout << people[k][n] << "\n";
    }
    return 0;
}
