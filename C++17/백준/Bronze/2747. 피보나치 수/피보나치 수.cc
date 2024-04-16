#include <iostream>
#include <vector>

using namespace std;

// int solution(int n)
// {
//     if (n <= 1)
//     {
//         return n;
//     }
//     else
//     {
//         return solution(n - 1) + solution(n - 2);
//     }
// }

int main()
{
    vector num(46, 0);
    num[0] = 0;
    num[1] = 1;

    int n;
    cin >> n;

    if (n <= 1)
    {
        cout << n << endl;
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
