#include <stdio.h>
#define INF 999
void printMatrix(int dist[][20], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (dist[i][j] == INF)
                printf("INF\t");
            else
                printf("%d\t", dist[i][j]);
        }
        printf("\n");
    }
}
void floydWarshall(int graph[][20], int n)
{
    int dist[20][20];
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            dist[i][j] = graph[i][j];
        }
    }
    printf("\nInitial Matrix:\n");
    printMatrix(dist, n);
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (dist[i][k] != INF && dist[k][j] != INF &&
                    dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
        printf("\nAfter Iteration %d (Vertex %d as Intermediate):\n",
               k + 1, k + 1);
        printMatrix(dist, n);
    }
    printf("\nFinal All Pair Shortest Path Matrix:\n");
    printMatrix(dist, n);
}
int main()
{
    int graph[20][20];
    int n, i, j;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix:\n");
    printf("Enter %d for INF (no direct edge).\n\n", INF);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);
            if (i == j)
                graph[i][j] = 0;
        }
    }
    floydWarshall(graph, n);
    return 0;
}
