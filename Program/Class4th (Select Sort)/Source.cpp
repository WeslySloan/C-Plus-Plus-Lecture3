#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 선택 정렬
    // 주어진 리스트 중에 최소값을 찾아서 맨 앞에 위치한
    // 결과를 교체하는 방식으로 정렬하는 알고리즘입니다.

    int list[SIZE] = { 13,8,97,1,36 };

    for (int i = 0; i < SIZE - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < SIZE; j++)
        {
            if (list[j] < list[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            std::swap(list[i], list[minIndex]);
        }
    }


    for (const int& element : list)
    {
        cout << element << " ";
    }

#pragma endregion
    return 0;
}

