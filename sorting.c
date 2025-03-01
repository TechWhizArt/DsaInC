
// Searching techniques...
// 1. Linear search

// #include <stdio.h>
// #include <stdlib.h>

// void linearSearch(int arr[], int k, int n) {
//     int i, count = 0;
//     for(i = 0; i< n; i++) {
//         if(arr[i] == k) {
//             printf("Element found at index %d\n", i);
//             count++;
//         }
//     }
//     if(count == 0) {
//         printf("Element not found\n");
//     }
// }

// int main() {
//     int n, k;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements in the array: ");
//     for(int i = 0; i<n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to be searched: ");
//     scanf("%d", &k);
//     linearSearch(arr, k, n);
//     return 0;
// }



// // 2. Binary search


// #include <stdio.h>
// #include <stdlib.h>

// int binarySearch(int arr[], int left, int right, int target) {
//     if (left <= right) {
//         int mid = left + (right - left) / 2;

//         // Check if the target is at mid
//         if (arr[mid] == target)
//             return mid;

//         // If target is smaller, search the left subarray
//         if (arr[mid] > target)
//             return binarySearch(arr, left, mid - 1, target);

//         // If target is larger, search the right subarray
//         return binarySearch(arr, mid + 1, right, target);
//     }
//     return -1; // Target not found
// }

// int main() {
//     int arr[] = {2, 4, 6, 8, 10, 12, 14, 16}; // Sorted array
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target;
 
//     printf("Enter the number to search: ");
//     scanf("%d", &target);

//     int result = binarySearch(arr, 0, size - 1, target);

//     if (result != -1)
//         printf("%d found at index %d\n", target, result);
//     else
//         printf("%d not found in the array\n", target);

//     return 0;
// }


// // ________________________________________________________________________________________________________________________________________________
// // Sorting techniques...












// //Bubble sort..._________________________________________________________________________________________________________________________________
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

// // //Insertion sort...

// #include <stdio.h>
// #include <stdlib.h>
// void insertionSort(int arr[], int n){

//     for(int i=1; i<n; i++) {
//         int current = arr[i];
//         int prev = i-1;
//         while (arr[prev] > current && prev >= 0) {
//             arr[prev+1] = arr[prev];
//             prev--;
//         }
//         arr[prev+1] = current;
//     }
// }

// void printelements(int arr[], int n) {
//     for(int i = 0; i<n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main () {
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements in the array:");
//     for(int i = 0; i<n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printelements(arr, n);
//     insertionSort(arr, n);
//     printelements(arr, n);
// }





















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





// // //Merge sort...

// #include <stdio.h>

// // Function to merge two subarrays
// void merge(int arr[], int left, int mid, int right) {
//     int i=left;
//     int j=mid+1;
//     int k=left;
//     while(i<=mid && j<=right) {
//         if(arr[i]<=arr[j]) {
//             arr[k] = arr[i];
//             i++;

//         }else {
//             arr[k] = arr[j];
//             j++;

//         }
//         k++;
//     }
//     while(i<=mid) {
//         arr[k] = arr[i];
//         i++;
//         k++;
//     }
//     while(j<=right) {
//         arr[k] = arr[j];
//         j++;
//         k++;
//     }
// }

// // Recursive function for Merge Sort
// void mergeSort(int arr[], int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;

//         // Recursively divide the array
//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);

//         // Merge the sorted halves
//         merge(arr, left, mid, right);
//     }
// }

// // Function to print the array
// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// // Main function
// int main() {
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, size);

//     mergeSort(arr, 0, size - 1);

//     printf("Sorted array: ");
//     printArray(arr, size);

//     return 0;
// }


// Quick sort...

#include <stdio.h>
#include <stdlib.h>

int partition (int arr[], int left, int right){

    int pivot = arr[left];
    int i = left;
    int j = right;
    while(i<j) {
        do {
            i++;
        } while(arr[i]<=pivot);
        do {
            j--;
        } while(arr[j]>pivot);

        if(i<j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[left], &arr[j]);
    return j;
}
void quickSort(int arr[], int left, int right) {
    if(left<right) {
        int j = partition(arr, left, right);
        quickSort(arr, left, j);
        quickSort(arr, j+1, right);
    }
}

int main () {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, size-1);
    for(int i = 0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


