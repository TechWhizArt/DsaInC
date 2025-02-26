// //Bubble sort...________________________________________________________________________________________________________________________________________

// #include <stdio.h>

// void bubbleSort(int arr[], int n) {
//     int i, j, temp;
//     for (i = 0; i < n-1; i++) {
//         for (j = 0; j < n-i-1; j++) {
//             if (arr[j] > arr[j+1]) {
//                 // Swap arr[j] and arr[j+1]
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

// void printArray(int arr[], int size) {
//     int i;
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     bubbleSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }

//or .....

// #include<stdio.h>
// #define max 50
// int main()
// {
//     int i,j,t,n;
//     int a[max];
//     printf("enter the limit of the array");
//     scanf("%d",&n);
//     printf("enter the elements in the array");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n-1;i++)
//     {
//         for(j=0;j<n-1-i;j++)
//         {
//             if(a[j]>a[j+1])
//             {
//                 t = a[j];
//                 a[j]= a[j+1];
//                 a[j+1]=t;
//             }
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d",a[i]);
//     }
//     return 0;
// }
//________________________________________________________________________________________________________________________________________

// //Selection sort...

// #include<stdio.h> 
// void selectionSort(int arr[], int n) {
//     int i, j, min_idx, temp;
//     for (i = 0; i < n-1; i++) {
//         min_idx = i;
//         for (j = i+1; j < n; j++) {
//             if (arr[j] < arr[min_idx]) {
//                 min_idx = j;
//             }
//         }
//         // Swap the found minimum element with the first element
//         temp = arr[min_idx];
//         arr[min_idx] = arr[i];
//         arr[i] = temp;
//     }
// }

// void printArray(int arr[], int size) {
//     int i;
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     selectionSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }
//________________________________________________________________________________________________________________________________________

// //Insertion sort...

#include <stdio.h>
#include <stdlib.h>
void insertionSort(int arr[], int n){

    for(int i=1; i<n; i++) {
        int current = arr[i];
        int prev = i-1;
        while (arr[prev] > current && prev >= 0) {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = current;
    }
}

void printelements(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main () {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array:");
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printelements(arr, n);
    insertionSort(arr, n);
    printelements(arr, n);
}





















// #include <stdio.h>

// void insertionSort(int arr[], int n) {
//     int i, key, j;
//     for (i = 1; i < n; i++) {
//         key = arr[i];
//         j = i - 1;

//         // Move elements of arr[0..i-1], that are greater than key,
//         // to one position ahead of their current position
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }

// void printArray(int arr[], int size) {
//     int i;
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     insertionSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);

//     return 0;
// }

//________________________________________________________________________________________________________________________________________

// //Merge sort...