#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int checking(int num){
    if(num<2) return 6;
    
    return 7 - num;
}
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    // // 1. 정렬 비교 -> 0 때문에 정렬해도 매칭이 안됨
    // sort(lottos.begin(), lottos.end());
    // sort(win_nums.begin(), win_nums.end());
    
    // 2. 번호 일치 -> find(), count
    int zero_count = count(lottos.begin(), lottos.end(), 0);
    int correct_count=0;
    
    for(auto& i:lottos){
        if(find(win_nums.begin(), win_nums.end(), i) != win_nums.end())
        {
            correct_count++;
        }
    }
    // 당첨 순위 비교 -> zero갯수 = 최고 순위, 맞는 번호갯수 = 최저 순위 결정
    answer.push_back(checking(zero_count+correct_count));
    answer.push_back(checking(correct_count));
    
    return answer;
}
