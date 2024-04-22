#include <string>
#include <vector>
#include <cmath>
using namespace std;
// 
vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    
    for(int i=0;i<num_list.size();i+=n){ // i = 0,3,6
        vector<int> arr;
        for(int j=i;j<i+n;j++){ // i = 0,3,6 -> (0,1,2), (3,4,5) ... i+n
            arr.push_back(num_list[j]);
        }
        answer.push_back(arr);
    }
    return answer;
}