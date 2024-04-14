#include <string>
#include <vector>

using namespace std;
//1~7 -> 1, 8~14 -> 2
int solution(int n) {
    int answer = 0;
    int pizza_number=0;
    
    for(int i=0;i<n;i+=7){
        answer += 1;
    }
    return answer;
}