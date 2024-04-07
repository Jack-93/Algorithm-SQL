#include <string>
#include <stack>
#include <iostream>

using namespace std;
// 1. (,) 갯수 count?
// 2. stack 써서 짝맞추기 pop?
// 1.( 들어오면 stack -> (
// 2.) 들어오면 stack안을 체크하고 (가 없으면 false 
// 있으면 (를 팝업
// 3.결국 stack에 아무것도 없으면 true;
//     ( -> stack1
//     ( -> stack2
//     ) -> pop2
//     ( -> stack2
//     * stack 1,2 => false

bool solution(string s)
{
    bool answer = true;
    stack<char> st;
    int cnt1,cnt2=0;
    
    // size() = O(1), length() = O(N), length
    for(int i=0;i<s.size();i++){
        // (,) 아니면 바로 출력 false
        // if((s[i]!='(' || (s[i]!=')'))) return false;
        
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty()) st.pop();
            else st.push(s[i]);
        }
        
        if(st.empty()) answer = true;
        else answer = false;
    }
    return answer;
}