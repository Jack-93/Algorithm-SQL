#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> a;
    vector<string> answer;
    
    for(int i=0;i<participant.size();i++)
        a[participant[i]]++;
    
    for(int i=0;i<completion.size();i++)
        a[completion[i]]--;
                    
    for(auto& i:a){
        if(i.second==1) // answer.push_back(i.first);
            return i.first;
    }
}