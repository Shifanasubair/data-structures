#include<stdio.h>
#include<stdlib.h>

void main() {
    int u, v, n, i, j, ne = 1;
    int visited[10] = {0}, min, mincost = 0, cost[10][10];

    printf("\n Enter the number of nodes: ");
    scanf("%d", &n);

    printf("\n Enter the adjacency matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0) {
                cost[i][j] = 999;  
            }
        }
    }

    visited[0] = 1; 
    printf("\n");

    while(ne < n) {
        min = 999;  
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(cost[i][j] < min) {
                    if(visited[i] != 0 && visited[j] == 0) { 
                        min = cost[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }

        printf("\n Edge %d: (%d %d) Cost: %d", ne++ , u + 1, v + 1, min); 
        mincost += min;
        visited[v] = 1; 
        cost[u][v] = cost[v][u] = 999; 
    }

    printf("\n Minimum cost = %d", mincost);
}

