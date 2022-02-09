/* 
  Program : Selection Sort Algorithms.
    
  Time Complexity: O(n^2)
  Space Complexity: O(n)
*/

#include<stdio.h>
int main()
{
    int ara[100], n, t, min;

    printf("Enter Length of an array : ");
    scanf("%d", &n);

    printf("\nEnter Values of the array : ");
    for(int i=0; i<n; i++){
          scanf("%d", &ara[i]);
    }

    for(int i=0; i<n-1; i++){
        min = i;

        for(int j=i+1; j<n; j++){
            if(ara[j] < ara[min]){
                min = j;
            }
        }
        if(min!=i){
            t = ara[i];
            ara[i] = ara[min];
            ara[min] = t;
        }
    }

    printf("\nAfter Selection Sorted : ");
    for(int i=0; i<n; i++){
            printf("%d ",ara[i]);
    }
    printf("\n");
    return 0;
}
