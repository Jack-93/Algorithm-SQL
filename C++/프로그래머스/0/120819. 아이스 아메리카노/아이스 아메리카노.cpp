#include <string>
#include <vector>

using namespace std;
// money -> 10^6 -> max O(nlog n)
vector<int> solution(int money) {
    vector<int> answer;
    int count=0;
    while(1){
        if(money - 5500 >= 0){
            count++;
            money-=5500;
        }
        else{
            answer.push_back(count);
            answer.push_back(money);
            break;
        }
    }   
    return answer;
}