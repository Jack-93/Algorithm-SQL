#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    pair<int, int> mmx = minmax({dots[0][0],dots[1][0],dots[2][0],dots[3][0]});
    pair<int, int> mmy = minmax({dots[0][1],dots[1][1],dots[2][1],dots[3][1]});
    answer = (mmx.second-mmx.first) * (mmy.second-mmy.first);
    return answer;
}