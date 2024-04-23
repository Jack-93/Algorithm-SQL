#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(int i=0;i<commands.size();i++){
    // [2,5,3] -> commands[0][0], [0][1], [0][2]
    // commands[0][2] (2) ~ commands[0][5] (5)중 
    // commands[0][3] (3) index의 원소    
        vector<int> res;
        for(int j=0;j <= commands[i][1] - commands[i][0];j++){
            // res -> {5,2,6,3}
            res.push_back(array[commands[i][0]-1+j]);
        }
        sort(res.begin(), res.end());
        answer.push_back(res[commands[i][2]-1]);
    }
    return answer;
}