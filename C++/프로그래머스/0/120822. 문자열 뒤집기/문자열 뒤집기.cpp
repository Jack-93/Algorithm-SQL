#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i=1;i<=my_string.size();i++){
        answer += my_string.substr(my_string.size()-i, 1);
    }
    
    return answer;
}