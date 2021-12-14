//Ananya Agrawal
//199303010

#include <stdio.h>
#define MAX 99
int V;

int mincost(int cost[], int visited[])
{
	int min = 9999, index, i;
	for(i = 0; i < V; i++)
	{
		if(visited[i] == 0 && cost[i] < min)
		{
			min = cost[i];
			index = i;
		}
	}
	return index;
}

void MST(int parent[], int Graph[MAX][MAX])
{
	int i, j, min;
	printf("Edge\t Weight\n");
	for(i = 1; i < V; i++)
	{
		min = 1;
		for(j = 1; j < V; j++)
		{
			if(Graph[min][parent[min]] > Graph[j][parent[j]])
			{
				min = j;
			}
		}
		printf("%d - %d\t %d\n", parent[min], min, Graph[min][parent[min]]);
		Graph[min][parent[min]] = 9999;
	}
}

void Prims(int Graph[MAX][MAX])
{
	int parent[V], cost[V], visited[V], start, i,j;
	for(i = 0 ; i < V; i++)
	{
		cost[i] = 9999;
		visited[i] = 0;
	}
	cost[0] = 0;
	parent[0] = -1;
	for(i = 0; i < V-1; i++)
	{
		start = mincost(cost,visited);
		visited[start] = 1;
		for(j = 0; j < V; j++)
		{
			if(Graph[start][j] != 0 && visited[j] == 0 && Graph[start][j] < cost[j])
			{
				parent[j] = start;
				cost[j] = Graph[start][j];
			}
		}
	}
	MST(parent, Graph);
}

int main() 
{
	int Graph[MAX][MAX], i, j;
	printf("Enter the number of vertices:\n");
	scanf("%d",&V);
	printf("Enter an adjacency matrix: \n");
	for(i = 0; i < V; i++)
	{
		for(j = 0; j < V; j++)
		{
			scanf("%d",&Graph[i][j]);
		}
		printf("\n");
	}

//	int Graph[V][V] = {
//		{0, 9, 75, 0, 0},
//		{9, 0, 95, 19, 42},
//		{75, 95, 0, 51, 66},
//		{0, 19, 51, 0, 31},
//		{0, 42,66, 31, 0}
//	};
	//printf("Enter the starting vertex: \n");
	//scanf("%d",&u);
	Prims(Graph);
	return 0;
}
