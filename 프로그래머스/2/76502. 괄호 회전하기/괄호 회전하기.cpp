#include <string>
#include <vector>
#include <stack>

using namespace std;
// function -> 1 or 0 (문자열이 올바른지 확인, x번 회전)
bool trans_check(string s){
    stack<char> stk;
    // 원형부터 시작해서 x개 만큼 회전
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            stk.push(s[i]);
        }
        else if (s[i] == ')' && stk.top() == '(')
        {
            stk.pop();
        }
        else if (s[i] == ']' && stk.top() == '[')
        {
            stk.pop();
        }
        else if (s[i] == '}' && stk.top() == '{')
        {
            stk.pop();
        }
        else
            return 0;
    }
    // 스택이 비어있다면 올바른 괄호
    if (stk.empty())
        return 1;
    else
        return 0;
    // 회전하면서 비교, 시간 2중 for문 -> 시간초과
//     for(int circ=0;circ<s.length();circ++){
//         for(int i=0;i<s.length();i++){
//             if(stk.empty() && (s[i] == '(' or '{' or '[')){
//                 stk.push(s[i]);
//             }
//             else if(stk.empty() && (s[i] == ')' or '}' or ']'))
//                 return 0;
        
//         }
//     }

}
// 회전해서 func1 넘기기 -> 2중for문 방지
int solution(string s) {
    int answer = 0;
    char temp;
    
    if(trans_check(s)) answer++;
    for(int i=0;i<s.length()-1;i++){
        temp = s.front();
        s.erase(s.begin());
        s.push_back(temp);
        
        if(trans_check(s)) answer++;
    }
    
    return answer;
}