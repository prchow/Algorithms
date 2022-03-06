/*
     Program: MERGE SORT
     
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Input The Index: ");
    scanf("%d", &n);

    int a[n], l = 0, r = n - 1;

    printf("Enter The Elements: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    MergeSort (a, l, r);

    printf("\nAfter Merge Sort:\n");
    for (int i = 0; i< n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

int MergeSort (int a, int l, int r){

    if (r > l){
        int mid = l + (r - l) / 2;
        MergeSort(a, l, mid);
        MergeSort(a, mid + 1, r);

        Merge(a, l, mid, r);
    }
}

void Merge(int a[], int l, int mid, int r) {

    int length1 = mid - l + 1;
    int length2 = r - mid;

    int left[length1], right[length2];

    for (int i = 0; i < length1; i++){
        left[i] = a[l + i];
    }

    for (int j = 0; j < length2; j++){
        right[j] = a[mid + 1 + j];
    }

    int i=0, j=0, k=l;

    for (k = l; i < length1 && j < length2; k++){
        if (left [i] <= right [j]) {
            a[k] = left [i];
            i++;
        }
        else {
            a[k] = right [j];
            j++;
        }
    }

    while (i<length1){
        a[k] = left[i];
        i++;
        k++;
    }
    while (j< length2){
        a[k] = right[j];
        j++;
        k++;
    }
}

