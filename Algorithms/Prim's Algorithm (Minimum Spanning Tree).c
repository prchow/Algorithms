/*_______________________________
    Program: Prim's Algorithm
    > Prim's algorithm is a minimum spanning tree algorithm that takes a graph as input and
    finds the subset of the edges of that graph.
    
_________________________________*/

#include<stdio.h>
#include<stdbool.h>

#define INF 9999999  // Minimum value.
#define V 5          // Vertex in graph.
int main()
{
    // Adjacency matrix to represent graph. Matrix is G[][].
    int G[V][V] = {
                   {0, 9, 75, 0, 0},              // row = 1st node; col = 1, 2, 3, 4, 5 node.
                   {9, 0, 95, 19, 42},            // row = 2nd node; col = 1, 2, 3, 4, 5 node.
                   {75, 95, 0, 51, 66},           // row = 3rd node; col = 1, 2, 3, 4, 5 node.
                   {0, 19, 51, 0, 31},
                   {0, 42, 66, 31, 0}   };

    int edge = 0, cost = 0, selected[V];

    memset (selected, false, sizeof(selected));   // This function make false a array.

    selected[0] = true;
    int row, col;

    printf(" Edge : Weight\n");

    while (edge < V-1){                         // edge = vertex-1
            
      int min = INF;
      row = 0;
      col = 0;

      for (int i = 0; i < V; i++){
        if (selected[i]){

          for (int j = 0; j < V; j++) {
            if (!selected[j] && G[i][j]) {
              if (min > G[i][j]) {
                min = G[i][j];
                row = i;
                col = j;
              }
            }
          }
        }
      }
      printf(" %d - %d : %d\n", row, col, G[row][col]);

      cost = cost + G[row][col];          // Cost is the minimum or shortest path.
      selected[col] = true;
      edge++;
    }
    printf("\n The Total Cost:  %d\n", sum);

    return 0;
}
