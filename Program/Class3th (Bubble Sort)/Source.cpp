#include <iostream>

using namespace std;

#define SIZE 5

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int A = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = A;
            }
        }
    }
}

void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
#pragma region 거품 정렬
    // 서로 인접한 두 원소를 검사하여 정렬하는 알고리즘입니다.

    int list[SIZE] = { 13,8,97,1,36 };

    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < (SIZE - i) - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                std::swap(list[j], list[j + 1]);
            }
        }
    }

    for (const int& element : list)
    {
        cout << element << " ";
    }


    // int arr[] = { 3, 2, 7, 5, 11 };
    // int size = sizeof(arr) / sizeof(arr[0]);
    // 
    // cout << "arr[] 배열: ";
    // show(arr, size);
    // 
    // bubbleSort(arr, size);
    // 
    // cout << "거품 정렬 된 arr[] 배열 : ";
    // show(arr, size);
    // 
    // int arr2[] = { 31 ,10, 15 , 7, 5 , 21, 29 };
    // int size2 = sizeof(arr2) / sizeof(arr2[0]);
    // 
    // cout << "arr2[] 배열: ";
    // show(arr2, size2);
    // 
    // bubbleSort(arr2, size2);
    // 
    // cout << "거품 정렬 된 arr2[] 배열 : ";
    // show(arr2, size2);

#pragma endregion



    return 0;
}

