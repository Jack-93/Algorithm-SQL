#include <string>
#include <vector>

using namespace std;
// a*b = n인 모든 a,b
// n<=10^6 -> for(nlog n), n^2 X
int solution(int n) {
    int answer = 0;

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         if(i*j == n ) answer++;   
    //     }
    // }
    for(int i=1;i<=n;i++){
        if(n%i==0) answer++;
    }
    return answer;
}