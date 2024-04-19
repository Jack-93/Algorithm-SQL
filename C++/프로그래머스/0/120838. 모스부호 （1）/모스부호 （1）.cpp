#include <string>
#include <vector>
#include <unordered_map>

using namespace std;
// 모스부호 - 알파벳 map
// 공백 기준 알파벳 체크
string solution(string letter) {
    string answer = "";
    
    unordered_map<string, string> alphamap = 
    {
        {".-", "a"},{"-...","b"},
    {"-.-.","c"},{"-..","d"},{".","e"},{"..-.","f"},
    {"--.","g"},{"....","h"},{"..","i"},{".---","j"},
    {"-.-","k"},{".-..","l"},{"--","m"},{"-.","n"},
    {"---","o"},{".--.","p"},{"--.-","q"},{".-.","r"}, 
    {"...","s"},{"-","t"},{"..-","u"},{"...-","v"},
    {".--","w"},{"-..-","x"},{"-.--","y"},{"--..","z"}
    };
    
    // size_t start = letter.begin();
    size_t start = 0;
    // 공백의 index 설정 -> substr 주소 사용
    size_t end = letter.find(' ');
    
    // for(int i=0;i<letter.size();i++){
    while(end!=string::npos){
        // 공백 만나면 그 이전 모스부호들 저장 -> substr(index, length)
        string alp = letter.substr(start, end-start);
        // alp에 해당하는 value(알파벳) 할당
        answer += alphamap[alp];
        // 공백 만나면 다시 index 재설정
        // 시작 지점 -> 현재 찾은 공백 + 1
        start = end+1;
        end = letter.find(' ', start);
    }
    // 마지막 알파벳은 공백으로 구분 x -> 처음부터 끝까지 넣어서 판별
    // answer += letter.substr(start);
    string alp2 = letter.substr(start);
    answer += alphamap[alp2];
    
    return answer;
}









