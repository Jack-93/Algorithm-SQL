#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
// max 10^5 < O(n^2)
// 제품 - 수량 -> map<제품 string, 수량 int>
// 연속 열흘 -> sum += number -> 10
int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int result = 0;
    unordered_map<string, int> product;
    // for(auto& i:want)
    //    product.first = i;
    // for(auto& j:number)
    //    product.second = j;
    
    // key - value 할당 (want-number)
    for(int i=0;i<want.size();i++)
        product[want[i]] = number[i];
    
    
    // discount 품목과 갯수
    // unordered_map<string, int> dis;
    
    // 슬라이딩 윈도우, discount[0]부터 10개 -> discount[1]부터 10개 -> ...
    for(int i = 0; i <= discount.size() - 10; i++) {
        // ***계속 새로운 현재의 map을 갱신해야 0~9, 1~10, ... 가능***
        unordered_map<string, int> dis;
        for(int j=0;j<10;j++){
            dis[discount[i+j]]++;
        }
        // 지금 10개의 map간의 일치 여부 확인
        bool is_match = true;
        for(auto& i : product) {
            if (dis[i.first] != i.second) {
                is_match = false;
                break;
            }
        }
        if (is_match) {
            result++;
        }
    }
    return result;
}

           
           