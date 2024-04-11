#include <string>
#include <vector>

using namespace std;
// 빈병 a개 주면 b개 받음, 빈병 n개, a>b
// 2개 -> 1개 / 19개
// (19 / 2)*1 -> 9개, remain 1개
// ((remain 1개 + 9)/2)*1 -> 5개, remain 0개
// (0개+5)/2*1 -> 2개 remain 1개
// (1개+2)/2*1 -> 1개 remain 1개
// (1개+1)/2*1 -> 1개 remain 0개
// (0개+1)/2*1 -> 0 끝 총 9+5+2+1+1 18개
int solution(int a, int b, int n) {
    int answer = 0;
    int max = n;
    int rem = 0;
    // while(n>=a){
    //     val.push_back(((rem+n)/a)*b);
    //     rem = (rem+n)%a;
    // }
    while(max>=a){
        answer += (max/a)*b;
        max = (max/a)*b + (max%a);
    }
    
    // for(int i=0;i<val.size();i++){
    //     answer += val[i];
    // }
    return answer;
}