/*_____________________________________
     Dynamic Programming (DP) 
     Program: Kadane's Algorithm

_______________________________________*/

#include<stdio.h>
int main()
{
    int arr[4] = {-2, 3, 2, -1};

    int max = Kadane (arr);           // Kadane function call. 
    printf("\nMSS is : %d\n", max);

    return 0;
}

int Kadane (int arr[]){
    int max_current = arr[0];
    int max_global = arr[0];

    printf ("The Sub Array is : ");
    for (int i=1; i<4; i++){
        max_current = max( arr[i], max_current + arr[i]);      // max function call.

        if (max_current > max_global) {
            max_global = max_current;
            printf("%d ", arr[i]);         // Subarray print.
        }

    }
    return max_global;
}

int max (int a, int b){

    if (a > b){
        return a;
    }
    else {
        return b;
    }
}
