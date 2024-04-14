#include <string>
#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    
    answer = (double)accumulate(numbers.begin(), numbers.end(), 0) / numbers.size();
    
    return answer;
}