#include <bits/stdc++.h>

using namespace std;

int count1 = 0;
int count2 = 0;
// 함수 호출 시 count
int fib(int n)
{
    count1++;
    if (n == 1 or n == 2)
        return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}
// for문 반복 시 count
int fibonacci(int n)
{
    int arr[41];
    for (int i = 3; i <= n; i++)
    {
        count2++;
        arr[i] = arr[i - 2] + arr[i - 1];
    }
    return count2;
}
int main()
{
    int n;
    cin >> n;

    cout << fib(n) << " " << fibonacci(n);
}
