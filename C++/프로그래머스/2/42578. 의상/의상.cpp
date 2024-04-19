#include <string>
#include <vector>
#include <unordered_map>

using namespace std;
// map<string, vector<string>> 
// -> key - value => 의상종류 - 의상 이름들 (vector)
// * vector size로 조합 count
// 조합 {i=1 ~ n conbination (k_i +1)} -1
int solution(vector<vector<string>> clothes) {
    int answer =0;
    unordered_map<string, vector<string>> clothes_map;
    
    for(auto& i:clothes){
        clothes_map[i[1]].push_back(i[0]);
    }
    answer = 1;
    for(auto& i:clothes_map){
        answer *= (i.second.size() + 1);
    }
    answer = answer -1;
    return answer;
}