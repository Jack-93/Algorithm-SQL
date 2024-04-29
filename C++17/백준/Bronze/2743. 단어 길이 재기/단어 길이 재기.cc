#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        count++;
    }
    cout << count;
}
