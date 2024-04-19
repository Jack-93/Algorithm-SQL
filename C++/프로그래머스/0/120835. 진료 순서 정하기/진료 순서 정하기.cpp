#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
// 응급도 - 순위 -> map
// sorting -> index로 순위매김
// 원래 자료로 map의 value를 적용
vector<int> solution(vector<int> emergency) {
    // 사이즈 초기화
    vector<int> answer(emergency.size(), 0);
    unordered_map<int, int> order;
    
    // 내림차순으로 value 할당
    vector<int> sort_emer = emergency;
    sort(sort_emer.begin(), sort_emer.end(), greater<int>());
    for(int i=0;i<sort_emer.size();i++){
        // 순위 1 부터 시작
        order[sort_emer[i]] = i+1;
    }

    for(int i=0;i<emergency.size();i++){
        answer[i] = order[emergency[i]];
    }

    return answer;
}