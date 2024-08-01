#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

#define INF 1000000
#define SIZE 6


class Graph
{
private:
	int weight[SIZE][SIZE] =
	{
		// 1 2 3 4 5 6 
		  {0,2,5,3,INF,INF},
		  {2,0,7,INF,INF,9},
		  {5,7,0,1,5,2},
		  {3,INF,1,0,7,INF},
		  {INF,INF,2,7,0,2},
		  {INF,9,5,INF,2,0}
	};

	bool visited[SIZE];
	int distance[SIZE];

public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
			distance[i] = INF;
		} 
	}

	void Dijkstra(int start)
	{
		distance[start] = 0;
		for (int i = 0; i < SIZE; i++)
		{
			int A = -1; 
			for (int j = 0; j < SIZE; j++)
			{
				if (!visited[j] && (A == -1 || distance[j] < distance[A]))
				{
					A = j;
				}
			}
			visited[A] = true;

			for (int k = 0; k < SIZE; k++)
			{
				if (weight[A][k] != INF && distance[A] + weight[A][k] < distance[k])
				{
					distance[k] = distance[A] + weight[A][k];
				}
			}
		}

		
		for (int i = 0 ; i < SIZE; i++)
		{
			cout <<start + 1 << " -> " << i + 1 << " : " << distance[i] << endl;
		}

	}

};

// 0 2 5 3 10 7



int main ()
{
#pragma region 다익스트라 알고리즘
	// 시작점으로부터 모든 노드까지의 최소 거리를 구해주는
	// 알고리즘 입니다.

	// 1. distamce 배열에 weight[시작된 노드]의 값들로
	//    초기화 합니다.

	// 2. 시작점을 방문 처리합니다.

	// 3. distance 배열에서 최소 비용 노드를 찾고 방문 처리합니다
	//    단, 이미 방문한 노드는 제외합니다.

	// 4. 최소 비용 노드를 거쳐갈 지 고민해서 distance 배열을 갱신합니다.
	//    단, 이미 방문한 노드는 제외합니다.

	// 5. 모든 노드를 방문할 때까지 3번 ~ 4번을 반복합니다.

	// 방문하지 않은 노드 중에서 가장 작은 distance를 가진 노드를
	// 방문하고, 그 노드와 연결된 다른 노드까지의 거리를 계산합니다.


	Graph graph;
	graph.Dijkstra(0);

#pragma endregion


	return 0;
}
