#include <iostream>

using namespace std;

int main()
{
    int n;
    long long int num[90] = {0};
    num[1] = 1;
    cin >> n;

    if (n <= 1)
    {
        cout << num[n] << endl;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            num[i] = num[i - 1] + num[i - 2];
        }
        cout << num[n] << endl;
    }
}
