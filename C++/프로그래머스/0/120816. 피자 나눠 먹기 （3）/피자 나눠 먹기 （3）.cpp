#include <string>
#include <vector>

using namespace std;
// slice * pizza (pizza>=1) >= n
int solution(int slice, int n) {
    int answer = 1;
    
    for(int i=1;i<=n;i++){
        if( (slice*i) / n == 0 ) answer++;
        else return answer;
    }

}