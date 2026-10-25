#include <stdio.h>
#define INF 9999
int main() {
    int n, minCost = 0, edgeCount = 0;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    int cost[n][n], selected[n];
    printf("Enter adjacency matrix (0 for no edge):\n");
    for (int i = 0; i < n; i++) {
        selected[i] = 0;
        for (int j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0) cost[i][j] = INF;
        }
    }
    selected[0] = 1;
    printf("\nInitial Selected Array: [ ");
    for (int i = 0; i < n; i++) printf("%d ", selected[i]);
    printf("]\n\n");
    while (edgeCount < n - 1) {
        int min = INF, u = 0, v = 0;
        for (int i = 0; i < n; i++) {
            if (selected[i]) {
                for (int j = 0; j < n; j++) {
                    if (!selected[j] && cost[i][j] < min) {
                        min = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }
        selected[v] = 1;
        minCost += min;
        edgeCount++;
        printf("Edge (%d, %d) = %d\n", u, v, min);
        printf("Selected Array: [ ");
        for (int i = 0; i < n; i++) printf("%d ", selected[i]);
        printf("]\n\n");
    }
    printf("Total Minimum Cost = %d\n", minCost);
    return 0;
}
