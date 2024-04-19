#include <vector>
#include <iostream>
// 중복 숫자 제거 -> key(중복 x) ?
// 단순 0~size 비교 , O(n^2) -> 시간 초과, 최대 O(nlog n) 계산 필요
// 연속 숫자 비교 -> i-1 - i 비교
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    answer.push_back(arr[0]);
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]!=arr[i+1]) answer.push_back(arr[i+1]);
    }
    
    return answer;
}