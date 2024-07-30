#include <iostream>
#include <vector>
#include <algorithm>

#define SIZE 7

using namespace std;

//class Graph
//{
//private:
//	class Edge
//	{
//	public:
//		int x;
//		int y;
//		int distance;
//
//		Edge(int x, int y, int distance) : x(x), y(y), distance(distance) {}
//	};
//
//	vector<Edge> graph;
//
//public:
//	Graph()
//	{
//
//	}
//
//	void Insert(int x, int y, int distance)
//	{
//		graph.push_back(Edge(x, y, distance));
//	}
//
//
//};

class Graph
{
private:
    bool visited[SIZE];
    vector<int> graph[SIZE];
public:
    Graph()
    {
        for (int i = 0; i < SIZE; i++)
        {
            visited[i] = false;
        }
    }

    void Insert(int vertex, int edge)
    {
        graph[vertex].push_back(edge);
        graph[edge].push_back(vertex);
    }

    void Search(int start)
    {
        // 1. 현재 노드를 방문한 것으로 표시합니다.
        visited[start] = true;

        // 2. 현재 노드를 출력합니다.
        cout << start << " ";

        // 3. 현재 노드와 연결된 다른 노드를 재귀적으로 방문합니다.
        for (int i = 0; i < graph[start].size(); i++)
        {
            // 4. 현재 노드와 연결된 다음 노드를 가져옵니다.
            int next = graph[start][i];

            // 5. 다음 노드가 방문하지 않은 노드라면 재귀 함수를 호출합니다.
            if (visited[next] == false)
            {
                Search(next);
            }
        }
    }
};

int main ()
{
#pragma region 신장 트리
	// 그래프의 모든 정점을 포함하면서 사이클이 존재하지 않는
	// 부분 그래프로, 그래프의 모든 정점을 최소 비용으로 연결하는 트리입니다.

	// 그래프의 정점의 수가 n개일 때, 간선의 수는 n-1개 입니다.

	// 최소 비용 신장 트리
	// 그래프의 간선들의 가중치 합이 최소인 신장 트리

	Graph graph;


	graph.Insert(1, 7, 10);
	graph.Insert(1, 4, 28);
	graph.Insert(1, 2, 66);
	graph.Insert(1, 5, 19);

	graph.Insert(2, 4, 20);
	graph.Insert(2, 5, 60);

	graph.Insert(3, 5, 21);
	graph.Insert(3, 6, 35);

	graph.Insert(4, 7, 15);
	graph.Insert(5, 6, 40);


#pragma endregion



	return 0;
}
