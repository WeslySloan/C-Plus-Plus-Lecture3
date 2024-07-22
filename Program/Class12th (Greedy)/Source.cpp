﻿#include <iostream>
// #include <vector>

using namespace std;

//int machine(int in)
//{
//    vector<int> size = { 1000, 500, 100, 50, 10 };
//    vector<int> count(size.size(), 0);
//
//    for (size_t i = 0; i < size.size(); ++i)
//    {
//        count[i] = in / size[i];
//        in -= count[i] * size[i];
//    }
//
//    cout << in << endl;
//    cout << "필요한 동전 및 지폐 개수 : " << endl;
//    for (size_t i = 0; i < size.size(); ++i)
//    {
//        cout << size[i] << "원 : " << count[i] << " 개" << endl;
//    }
//
//}

int Greedy(int n)
{
    int count = 0;

    while (n >= 10)
    {
        if (n >= 1000)
        {
            n -= 1000;
            count++;
        }
        else if (n >= 500)
        {
            n -= 500;
            count++;
        }
        else if (n >= 100)
        {
            n -= 100;
            count++;
        }
        else if (n >= 50)
        {
            n -= 50;
            count++;
        }
        else if (n >= 10)
        {
            n -= 10;
            count++;
        }
    }

    return count;
}

int main()
{
#pragma region 탐욕법
    // 최적의 해를 구하는 데에 사용되는 근사적인 방법으로
    // 여러 경우 중 하나를 결정해야 할 때마다 그 순간에 
    // 최적이라고 생각되는 것을 선택해 나가는 방식으로 진행
    // 하여 최종적인 해답을 구하는 알고리즘입니다.

    // 1. 탐욕 선택 속성
    // 각 단계에서 '최적의 선택'을 했을 때 전체 문제에 대한
    // 최적의 해를 구할 수 있는 경우입니다.

    // 2. 최적 부분 구조
    // 전체 문제의 최적의 해가 '부분 문제의 최적의 해로 구성' 될
    // 수 있는 경우입니다

    // 그리디 알고리즘 단계

    // 1. 문제의 최적해 구조를 결정합니다.

    // 2. 문제의 구조에 맞게 선택 절차를 정의합니다

    // 3. 선택 절차에 따라 선택을 수행합니다.

    // 4. 선택된 해가 문제의 조건을 만족하는지 검사합니다.

    // 5. 조건을 만족하지 않으면 해당 해를 제외합니다.

    // 6. 모든 선택이 완료되면 해답을 검사합니다.

    // 7. 조건을 만족하지 않으면 해답으로 인정되지 않습니다.


    // 최소단위는 10원
#pragma endregion

    // int in = 1370;
    // machine(in);

    int n = 1370;

    cout << Greedy(n) << endl;

    return 0;
}