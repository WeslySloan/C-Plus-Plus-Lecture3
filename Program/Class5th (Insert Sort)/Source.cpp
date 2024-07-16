#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 삽입 정렬
    // 데이터를 하나씩 확인하면서 이미 정렬된 부분과 비교하여
    // 자신의 위치를 찾아 삽입하는 방식으로 정렬되는 알고리즘입니다.

    // 시작점은 n+1 [key] = n+1 
    // sort 되기 위해 default key 랑 next key 를 비교삽입 
    // && 
    // list[len + 1] > key 만큼 비교

    int list[SIZE] = { 13,8,97,1,36 };

    int key = 0;
    int j = 0;

    for (int i = 1; i < SIZE; i++)
    {
        key = list[i];

        for (j = i - 1; j >= 0 && list[j] > key; j--)
        {
            list[j + 1] = list[j];
        }

        list[j + 1] = key;
    }

    for (const int& element : list)
    {
        cout << element << " ";
    }

    // for (int i = 1; i < SIZE; i++)
    // {
    //     int key = list[i]; // default
    //     int j = i - 1;
    // 
    //     while (j >= 0 && list[j] > key)
    //     {
    //         list[j + 1] = list[j];
    //         j = j - 1;
    //     }
    //     list[j + 1] = key;
    // }
    // 
    // for (const int& element : list)
    // {
    //     cout << element << " ";
    // }

#pragma endregion


    return 0;
}