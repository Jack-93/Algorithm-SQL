#include <string>
#include <vector>

using namespace std;
// n%(6*pizza) == 0
int solution(int n) {
    int answer = 1;
    // n=10 -> 6*i % 10 ->
    for(int i=1;i<=n;i++){
        if((6*i)%n != 0) answer++;
        else return answer;
    }

}