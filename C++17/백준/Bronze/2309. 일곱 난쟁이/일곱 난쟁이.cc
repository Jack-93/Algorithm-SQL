#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int TOTAL_DWARFS = 9;
    int TARGET_SUM = 100;

    vector<int> heights(TOTAL_DWARFS);
    for (int i = 0; i < TOTAL_DWARFS; ++i)
    {
        cin >> heights[i];
    }
    sort(heights.begin(), heights.end());
    // 아홉 명의 난쟁이 중에서 일곱 명을 선택하는 모든 경우를 탐색
    for (int i = 0; i < TOTAL_DWARFS; ++i)
    {
        for (int j = i + 1; j < TOTAL_DWARFS; ++j)
        {
            // 선택한 두 난쟁이를 제외한 키의 합을 계산
            int sum = 0;
            for (int k = 0; k < TOTAL_DWARFS; ++k)
            {
                if (k != i && k != j)
                {
                    sum += heights[k];
                }
            }
            // 키의 합이 100이면 출력 후 종료
            if (sum == TARGET_SUM)
            {

                for (int k = 0; k < TOTAL_DWARFS; ++k)
                {
                    if (k != i && k != j)
                    {
                        cout << heights[k] << '\n';
                    }
                }
                return 0;
            }
        }
    }

    return 0;
}
