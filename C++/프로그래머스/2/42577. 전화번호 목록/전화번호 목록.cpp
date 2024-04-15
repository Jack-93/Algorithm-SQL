#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// O(nlog n)
bool solution(vector<string> phone_book) {
    bool answer = true;
    sort(phone_book.begin(), phone_book.end());
    for(int i=0;i<phone_book.size()-1;i++){
        string current = "";
        string next = "";
        current = phone_book[i];
        next = phone_book[i+1];
        
        if(next.find(current) == 0 ) answer = false;
    }
    return answer;
}