/*
   Program : "Insertion Sort".
   
   Programmer: Pranesh Chowdhury.
   Pesudocode:
     for (i = 1 to n)
         key = A[i]
         j = i - 1
       while (j >= 0 and A[j] > key)
          A[j + 1] = A[j]
          j = j - 1
      end while.
          A[j + 1] = key
      end for.

   Variables we need: A[], n, temp, i, j.
*/

#include<stdio.h>
int main()
{
    int temp, n, i, j;

    // Input: n = index.
    scanf("%d", &n);
    int A[n];        // After get the index number. I declare the Array variable.

    // Input: Array elements.
    for (int a = 0; a < n; a++){
        scanf("%d", &A[a]);
    }

    // Assume that 1st index A[0] is sorted. And the for loop 1 to (n-1).
    for (i = 1; i < n; i++){
        temp = A[i];
        j = i-1;

        while (j >= 0 && A[j] > temp){
            A[j+1] = A[j];
            j--;
        } // end while.

        A[j+1] = temp;
    } //end for.

    // Printing the Output.
    printf("Insertion Sort: ");
    for (int k = 0; k < n; k++){
        printf("%d ", A[k]);
    }
    
}
