/* 
    Program: QUICK SORT  
    Works: Divided and Conqure Approach. Array is divided into subarrays by selecting a pivot element. 
    ______________________________
    I/P:   A[] = [40,20,8,80,2,10]
    O/P:         [2,8,10,20,40,80]
    ______________________________
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Input the Index: ");
    scanf("%d", &n);

    int arr[n], low = 0, high = n - 1;

    printf("Write the Elements: ");
    for (int i = low; i <= high; i++){
        scanf("%d", &arr[i]);
    }

    QuickSort (arr, low, high);

    printf("Quick Sorted : ");
    for (int i = low; i <= high; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

QuickSort (int arr[], int low, int high){

    int pi;
    if (low < high){
        pi = partition (arr, low, high);   // Pivot Index.

        QuickSort (arr, low, pi-1);    // left side.
        QuickSort (arr, pi+1, high);   // right side.
    }
}

partition (int arr[], int low, int high){

    int pivot = arr[high];   // Right most element in Array.
    int i = low - 1;

    for (int j = low; j <= high-1; j++){
        int temp;

        if (arr[j] < pivot){
            i++;
            // Swapping.
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

        }
    }
    int temp;
    // Swapping the pivot.
    temp = arr [i + 1];
    arr [i + 1] = arr [high];
    arr [high] = temp;

    return (i + 1);    // Pivot Index.
}
