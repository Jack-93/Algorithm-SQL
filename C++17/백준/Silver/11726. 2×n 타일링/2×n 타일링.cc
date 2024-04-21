#include <iostream>
#include <vector>

using namespace std;

const int MOD = 10007;

int main()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1);

    // 초기값 설정
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; ++i)
    {
        dp[i] = ((dp[i - 1] % MOD) + (dp[i - 2] % MOD)) % MOD;
    }

    // 결과 출력
    cout << dp[n] << endl;

    return 0;
}
