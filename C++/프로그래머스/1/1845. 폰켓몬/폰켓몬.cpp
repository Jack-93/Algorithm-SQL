#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    unordered_map<int,int> get_pokemon;
    
    for(auto i:nums){
        // pokemon 픽 -> value 증가
        get_pokemon[i]++;
    }
    // 내가 뽑은 pokemon map과 선택 가능한 가짓수중에 비교
    answer = min(nums.size()/2, get_pokemon.size());
    return answer;
}