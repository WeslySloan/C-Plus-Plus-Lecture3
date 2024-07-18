#include <iostream>

using namespace std;

#define SIZE 8

int quicksort(int list[], int start, int end)
{
    if (start >= end)
    {
        return 0;
    }

    int pivot = list[start];
    int left = start + 1;
    int right = end;

    while (left <= right) {
        while (left <= end && list[left] <= pivot)
        {
            left++;
        }
        while (right > start && list[right] >= pivot)
        {
            right--;
        }
        if (left < right)
        {
            swap(list[left], list[right]);
        }
    }

    swap(list[start], list[right]);

    quicksort(list, start, right - 1);
    quicksort(list, right + 1, end);
}

int main()
{
#pragma region 퀵 정렬
    // 기준점을 획득한 다음 해당 기준점을 기준으로
    // 배열을 나누고 한 쪽에는 기준점보다 작은 값들이
    // 위치하고 다른 한 쪽에는 기준점보다 큰 값들이
    // 위치하도록 정렬하는 알고리즘입니다.

    // 나누어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여
    // 모든 배열이 기본 배열이 될 때까지 반복하면서 정렬합니다.

    int list[SIZE] = { 13, 8, 99, 1, 36, 24, 57, 93 };

    quicksort(list, 0, SIZE - 1);

    for (const int& element : list)
    {
        cout << element << " ";
    }
    cout << endl;

#pragma endregion



    return 0;
}

