/*_________________________
     Program: BUBBLE SORT
     
___________________________*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter The Elements: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    BubbleSort(arr, n);       // BubbleSort function call.
    
    printf("After Bubble Sort: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

void BubbleSort(int arr[], int n) {

  for (int i = 0; i < n-1; i++) {
    int swapped = 0;

    for (int j = 0; i < n - j-1; j++) {

      if (arr[j] > arr[j + 1]) {

        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;

        swapped = 1;
      }
    }
    if (swapped == 0) {
      break;
    }
  }
}
