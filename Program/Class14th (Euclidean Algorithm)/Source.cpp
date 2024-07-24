#include <iostream>

using namespace std;

#define SIZE 11

int main()
{
#pragma region 유클리드 호제법
	// 2개의 자연수 :또는 정식의 최대 공약수를 구하는 방식으로,
	// 두 수가 서로 상대방 수를 나누어서 원하는 수를 얻어내는 알고리즘입니다.

	// int x = 19;
	// int y = 48;

	int x = 19332;
	int y = 78696;

	int result = 0;

	//for (int i = 1; i <= x && i <= y; i++)
	//{
	//	if (x % i == 0 && y % i == 0)
	//	{
	//		result = i;
	//	}
	//}

	while (y != 0)
	{
		int z = x % y;
		x = y;
		y = z;
	}

	result = x;

	cout << "두 수의 최대 공약수 : " << result << endl;

#pragma endregion



	return 0;
}

