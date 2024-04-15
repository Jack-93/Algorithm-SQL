#include <string>
#include <vector>

using namespace std;
// 10^2 -> max O(n^4)
vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int count_odd = 0;
    int count_even = 0;
    
    for(auto& i:num_list){
        if(i%2==0) count_even++;
        else count_odd++;
    }
    answer.push_back(count_even);
    answer.push_back(count_odd);
    return answer;
}