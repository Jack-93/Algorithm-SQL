#include <string>
#include <vector>
#include <map>

// 고유한 숫자에 의미 부여 -> key, value fair -> map
// key 중복 불가, 자동 ASC 삽입, 동적 할당
// 빈도수 x, 값 return
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    map<int, int> maxv;
    
    for(auto& i:array){
        maxv[i]++;
    }
    
    int max = 0;
    // map<key, value> first-second -> 1-1, 2-1, 3-3, 4-1
    for(auto& i:maxv){
        if(i.second > max){
            max = i.second;
            answer = i.first;
        }
        else if(i.second == max) answer = -1;
    }
    return answer;   
}
