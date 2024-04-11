#include <string>
#include <vector>
#include <cmath>

using namespace std;
/// qwer 0123 -> 2
/// qwert 01234 -> 2.5
string solution(string s) {
    string answer = "";
    int mid = s.length()/2;
    string sub_s;
    
    if(s.length()%2 == 1) answer = s[ceil(mid)];
    else{ 
        answer = s.substr(mid-1,2);
    }
    
    return answer;
}