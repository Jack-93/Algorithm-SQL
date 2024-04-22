#include <iostream>

using namespace std;
// 팩토리얼 연산, 2^30 
__int128 factorial(int num) {
    __int128 result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

__int128 solution(int balls, int share) {
    return factorial(balls) / (factorial(share) * factorial(balls-share));
}