#include <string>
#include <vector>
#include <cmath>

using namespace std;
// 10<=price<=10^6 -> max O(nlog n)
int solution(int price) {
    int answer = 0;
    // 100000 -> pow(10,5)
    if(5*pow(10, 5) <= price) answer = (int)ceil(price*80/100);
    else if(3*pow(10, 5) <= price && price < 5*pow(10,5)) answer = (int)ceil(price*90/100);
    else if(pow(10, 5) <= price && price < 3*pow(10,5)) answer = (int)ceil(price*95/100);
    else answer = price;
    
    return answer;
}