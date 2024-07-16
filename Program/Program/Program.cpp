#include <iostream>

using namespace std;

#define SIZE 8

void BinarySearch(int list[], int key)
{
	int left = 0;
	int right = SIZE - 1;

	while (left <= right)
	{
		int pivot = (left + right) / 2;

		if (list[pivot] == key)
		{
			cout << "key Found : " << list[pivot] << endl;
			return;
		}
		else if (list[pivot] > key)
		{
			right = pivot - 1;
		}
		else
		{
			left = pivot + 1;
		}
	}

	cout << "Not key Found" << endl;
}

int main()
{
	int list[SIZE] = { 5, 7, 10, 15, 19, 20, 25 };

	BinarySearch(list, 20);

	return 0;
}

//int binarysearch(int arr[], int size, int target) {
//    int left = 0;
//    int right = size - 1;
//
//    while (left <= right) {
//        int middle = left + (right - left) / 2;  
//
//        if (arr[middle] == target) 
//        {
//            return middle;
//        }
//        else if (arr[middle] > target) 
//        {
//            right = middle - 1;
//        }
//        else 
//        {
//            left = middle + 1;
//        }
//    }
//    return -1; 
//}
//
//int main()
//{
//#pragma region 이진 탐색
//	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를
//	// 좁혀나가는 방식으로 동작하는 탐색 알고리즘입니다.
//
//    int list[] = { 1, 5, 10, 12};
//    int size = sizeof(list) / sizeof(list[0]);
//    int target;
//
//    cout << "Element : ";
//    cin >> target;
//
//    int result = binarysearch(list, size, target);
//
//    if (result != -1) 
//    {
//        cout << "index : " << result << endl;
//    }
//    else 
//    {
//        cout << "Element not found " << endl;
//    }
//
//#pragma endregion
//
//
//	return 0;
//}