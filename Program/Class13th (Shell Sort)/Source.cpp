#include <iostream>

using namespace std;

#define SIZE 11

void shellsort(int list[], int size)
{
	for (int gap = size / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < size; i++)
		{
			int j;
			int index = list[i];

			for (j = i; j >= gap && list[j - gap] > index; j -= gap)
			{
				list[j] = list[j - gap];
			}
			list[j] = index;
		}
	}
}

int main()
{
#pragma region 쉘 정렬
	// 먼 거리의 요소들을 먼저 정렬하여 배열을 부분적으로
	// 정렬한 후, 점진적으로 더 작은 간격을 사용하는 정렬 알고리즘입니다.


	// 쉘정렬은 0순부터 남는칸엔 0으로 초기화

	int list[SIZE] = { 10,8,6,20,4,3,22,1,15,16 };


	// int gap = gap / 2;

	// shellsort(list, SIZE);
	// 


	int gap = 0;
	int j = 0;
	int key = 0;

	for (gap = SIZE / 2; gap > 0; gap /= 2)
	{
		if (gap % 2 == 0)
		{
			gap++;
		}

		for (int i = gap; i < SIZE; i++)
		{
			key = list[i];

			for (j = i; j >= gap && list[j - gap] > key; j -= gap)
			{
				list[j] = list[j - gap];
			}

			list[j] = key;
		}
	}

	for (const int& element : list)
	{
		cout << element << " ";
	}




#pragma endregion


	return 0;
}