/*

Program: Write a C program to form Adjacency Matrix of a given graph.

Hint:
Approach: The idea is to use a square Matrix of size NxN to create Adjacency Matrix. Below are the steps:
        1. Create a 2D array(say Adj[N+1][N+1]) of size NxN and initialise all value of this matrix to zero.
        2. For each edge in arr[][](say X and Y), Update value at Adj[X][Y] and Adj[Y][X] to 1, denotes that there is a
           edge between X and Y.
        3. Display the Adjacency Matrix after the above operation for all the pairs in arr[][].

 Input: N = 5, M = 4, arr[][] = { { 1, 2 }, { 2, 3 }, { 4, 5 }, { 1, 5 } }
 Output:
    0 1 0 0 1
    1 0 1 0 0
    0 1 0 0 0
    0 0 0 0 1
    1 0 0 1 0

*/

#include<stdio.h>
int main()
{
    int n = 5, m = 4;    // 5 Nodes, 4 Edges.
    int ara[10][10] = { {1, 2}, {2, 3}, {4, 5}, {1, 5} };   // Given Array.

    int adj[10][10];     //Adjacency Matrix.

    printf("Before Adjacency Matrix: \n");
    // Making all index value = 0.
    for (int i = 0; i < n+1; i++){
        for (int j = 0; j < n+1; j++){

            adj[i][j] = 0;
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }

    int x, y;   // Taking 2 value for initialize the array values.
    for (int i = 0; i < n; i++){
            // initialize the array values into x & y variable.
            x = ara [i][0];
            y = ara [i][1];

            // Those values have edges. Then the Adjacency Matrix value = 1.
            adj[x][y] = 1;
            adj[y][x] = 1;
    }
    printf("After Adjacency Matrix: \n");
    // Output:
    for (int i = 1; i <= n; i++){
        for (int j = 1; j<= n; j++){
            printf("%d  ", adj[i][j]);
        }
        printf("\n");
    }

    return 0;
}
