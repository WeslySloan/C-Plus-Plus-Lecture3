#include <iostream>

using namespace std;

int main()
{
#pragma region 누적합
	// 특정한 배열이 있을 때, 배열까지의 합을 나타내는 것입니다.


	int arr[5] = { 1,2,3,4,5 };
	int result[5];

	result[0] = arr[0];

	for (int i = 1; i < 5; i++)
	{
		result[i] = result[i - 1] + arr[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << result[i] << " ";
	}

#pragma endregion


	return 0;
}
