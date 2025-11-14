#include <stdio.h>

#define N 5   // number of nodes

int visited[N];

// 0/1 adjacency matrix (fixed graph)
int adj[N][N] = {
    //0 1 2 3 4   <- nodes
    {0,1,1,0,0}, // node 0 connected to 1,2
    {1,0,0,1,0}, // node 1 connected to 0,3
    {1,0,0,1,1}, // node 2 connected to 0,3,4
    {0,1,1,0,0}, // node 3 connected to 1,2
    {0,0,1,0,0}  // node 4 connected to 2
};

void DFS(int node) {
    visited[node] = 1;
    printf("%d ", node);

    for (int i = 0; i < N; i++) {
        if (adj[node][i] == 1 && visited[i] == 0) {
            DFS(i);
        }
    }
}

int main() {
    for (int i = 0; i < N; i++)
        visited[i] = 0;

    printf("DFS starting from node 0: ");
    DFS(0);

    return 0;
}
