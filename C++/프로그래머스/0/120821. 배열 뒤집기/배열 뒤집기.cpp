#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// 10^3 -> max O(n^3)
vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    reverse(num_list.begin(), num_list.end());
    for(auto& i:num_list){
        answer.push_back(i);
    }
    return answer;
}