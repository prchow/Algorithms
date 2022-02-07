#include<stdio.h>
int main()
{
    int n = 5, m = 4;
    int ara[10][10] = { {1, 2}, {2, 3}, {4, 5}, {1, 5} };

    int adj[10][10];

    printf("Before Adjacency Matrix: \n");

    for (int i = 0; i < n+1; i++){
        for (int j = 0; j < n+1; j++){

            adj[i][j] = 0;
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }

    int x, y;
    for (int i = 0; i < n; i++){
            x = ara [i][0];
            y = ara [i][1];

            adj[x][y] = 1;
            adj[y][x] = 1;
    }
    printf("After Adjacency Matrix: \n");

    for (int i = 1; i <= n; i++){
        for (int j = 1; j<= n; j++){
            printf("%d  ", adj[i][j]);
        }
        printf("\n");
    }

    return 0;
}
