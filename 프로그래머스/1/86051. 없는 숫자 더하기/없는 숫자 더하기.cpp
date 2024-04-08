#include <string>
#include <vector>

using namespace std;

// 0~9중 없는 수 찾기
int solution(vector<int> numbers) {
    int answer = -1;
    int cnt=0;
    for(int i=0;i<numbers.size();i++){
        if(numbers[i]>=0 && numbers[i]<10){
            cnt+=numbers[i];
        }
    }
    answer=45-cnt;
    return answer;
}