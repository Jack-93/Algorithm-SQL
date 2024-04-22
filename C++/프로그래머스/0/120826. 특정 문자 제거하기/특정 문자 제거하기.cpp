#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    string empty_str = "";
    
    // for (auto i: letter) {
    //     my_string.erase(remove(my_string.begin(), my_string.end(), i), my_string.end());
    // }
    while(true){
        size_t pos = my_string.find(letter);
        if(pos!=string::npos){
            my_string.erase(pos, 1);
        }
        else break;
    }
    answer = my_string;
    return answer;
}