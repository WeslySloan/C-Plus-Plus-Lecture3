#include <iostream>

using namespace std;

#define SIZE 10001

// int Fibbonacci(int n)
// {
//     if (n <= 0)
//     {
//         return 0;
//     }
//     else if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return Fibonacci(n - 1);
//     }
// 
// }

int Fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    int* F = new int[n + 1];
    F[0] = 0;
    F[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        F[i] = F[i - 1] + F[i - 2];
    }

    return F[n];
}

int Fibonacci(int n, int list[])
{
    if (n <= 0)
    {
        return 0;
    }
    else if (n <= 2)
    {
        return 1;
    }

    if (list[n] != 0)
    {
        return list[n];
    }

    return list[n] = Fibonacci(n - 1, list) + Fibonacci(n - 2, list);
}

int main()
{
#pragma region 동적 계획법
    // 특정 범위까지의 값을 구하기 위해서 그것과
    // 다른 범위까지의 값을 이용하여 효율적으로 값을
    // 구하는 알고리즘입니다.

    // 메모이제이션
    // 프로그램이 동일한 계산을 반복해야 할 때, 이전에
    // 계산한 값을 메모리에 저장함으로써 동일한 계산을
    // 반복 수행하는 작업을 제거하여 프로그램의 실행 속도를
    // 향상시키는 기법입니다.

    int n = 43;

    cout << Fib(n) << endl;

    int list[SIZE] = { 0, };

    cout << Fibonacci(43, list) << endl;

#pragma endregion





    return 0;
}