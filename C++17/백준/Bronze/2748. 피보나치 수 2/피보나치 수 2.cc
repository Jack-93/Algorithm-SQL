#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int fib[91] = {
        0,
    };
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }
    cout << fib[n] << "\n";
    return 0;
}
