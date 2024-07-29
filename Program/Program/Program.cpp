#include <iostream>
#include <queue>
#include <vector>

#define SIZE 7

using namespace std;

class Graph
{
private:
	int parent[SIZE];

public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			parent[i] = 0;
		}
	}

	int Find(int x)
	{
		if (parent[x] == x)
		{
			return x;
		}
		else
		{
			return parent[x] = Find(parent[x]);
		}
	}

	void Union(int x, int y)
	{

	}

	bool Same(int x, int y)
	{

	}

};



int main()
{
#pragma region 유니온 파인드
	// 여러 노드가 존재할 때 어떤 노드가 다른 노드와 연결되어
	// 있는지 확인하는 알고리즘입니다.

	// 유니온 파인드의 시간 복잡도
	// O(MlogN) : M은 연산의 개수, N은 노드의 개수
	// M이 N²에 가까울 때는 O(N²logN)이 됩니다.


#pragma endregion

	Graph graph;


	return 0;
}
