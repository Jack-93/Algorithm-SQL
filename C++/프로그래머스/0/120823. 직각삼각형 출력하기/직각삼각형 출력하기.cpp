#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    char star = '*';
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << star;
        }
        cout << endl;
    }
    return 0;
}