#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bubbleshort(arr, n);
    printarray(arr, n);
}

void bubbleshort(int arr[], int n){
    int i, j, temp;
    int swapped;

    for (i=0; i<n-i; i++){
        swapped = 0;
        for(j = 0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;
            }
        }
        if (swapped == 0);
            break;
    }
}

void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d", arr[i]);
    printf("\n");
    }
}