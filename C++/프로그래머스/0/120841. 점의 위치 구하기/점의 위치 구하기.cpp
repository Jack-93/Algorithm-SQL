#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int answer = 0;
    // 1, 4
    if(dot[0] > 0 ){
        
        if(dot[1] > 0) answer = 1;
        
        else answer = 4;
    }
    // 2, 3
    else{
        if(dot[1] > 0) answer = 2;
        else answer = 3;
    }
    return answer;
}