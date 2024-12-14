// // Program to convert decimal to binary...

// #include<stdio.h>
// void main () {
//     int d, arr[50];
//     scanf("%d", &d);
  
//     int i;
//     for(i = 0; d > 0; i++) {
//         arr[i] = d%2;
//         d/=2;
//     }

//     printf("Binary equivalent : ");
//     for(int j = i-1; j>=0; --j) {
//         printf("%d", arr[j]);
//     }
// }  

    // while (d>0) {
    //     arr[i] = d % 2;
    //     d = d/2;
    //     i++;

    // }


    // // generate n number of terms in fibonacci series

    // #include<stdio.h>
    
    // void main() {
    //     int a[100], i, n;
    //     scanf("%d", &n);     //number of terms to be printed
    //     a[0] = 0;
    //     a[1] = 1;
    //     for(i = 2; i<n; ++i) {
    //         a[i] = a[i-1] + a[i-2];
    //     }
    //     for(int j = 0; j<n; j++) {
    //         printf("%d ", a[j]);
    //     }
    // }

// #include<stdio.h>
// void main () {
//     int n;
//     scanf("%d", &n);   //length of the array
//     int a[n], i;
//     for(i = 0; i<n; i++) {
//         scanf("%d", &a[i]);

//     }
//     printf("Traversing the array ... \n");
//     for(i = 0; i< n; i++) {
//         printf("%d", a[i]);
//     }
// }

// // Insertion in a 1-D array...
// #include<stdio.h>
// #include<stdlib.h>

// void main () {
    // int arr[50], n, data, loc, ch, k;
    // printf("Enter the number of elements to be entered in the array: ");
    // scanf("%d", &n);
    // printf("Enter %d elements in the array : \n", n);
    // for(int i = 0; i<n; i++) {
    //     scanf("%d", &arr[i]);
    // }
    // printf("Enter the value to be inserted: ");
    // scanf("%d", &data);
    // printf("Enter your choice: \n'1' for beginning\n'2' for ending\n'3' for some specified location: \n");
    // scanf("%d", &ch);
//     switch(ch) {
//         case 1:
//             if(n == 50){
//                 printf("array overflow");
//                 exit (1);
//             }
//             k = n;                     //let 10
//             while (k >= 0) {
//                 arr[k+1] = arr[k];            //arr11 = arr10, arr10 = arr9,...
//                 k--;
//             }
//             arr[0] = data;
//             break;
//         case 2:
//             if(n == 50){
//                 printf("array overflow");
//                 exit (1);
//             }
//             arr[n] = data;
//             break;
//         case 3:
//             if(n == 50){
//                 printf("array overflow");
//                 exit (1);
//             }
//             printf("Enter the location after which the value need to be inserted: ");
//             scanf("%d", &loc);
//             k = n;                //ub 10
//             while(k >= loc) {               //10>5  
//                 arr[k+1] = arr[k];                 //arr11 = arr10, .... arr6 = arr5
//                 k--;
//             }
//             arr[loc] = data;
//             break;
//         default :
//         printf("Incorrect choice!!!");
//         exit (1);
//     }

    // printf("The new array list is as follows: \n");
    // for(int i = 0; i < n+1; i++) {
    //     printf("%d  ", arr[i]);
    // }
// }



// //Deletion in a 1-D array.....

// #include<stdio.h>
// #include<stdlib.h>

// void main () {
//     int arr[50], n, data, loc, ch, k;
//     printf("Enter the number of elements to be entered in the array: ");
//     scanf("%d", &n);      //ub
//     printf("Enter %d elements in the array : \n", n);
//     for(int i = 0; i<n; i++) {
//         scanf("%d", &arr[i]);          //array elements filled
//     }
//     printf("Enter your choice: \n'1' for deletion at beginning\n'2' for ending\n'3' for some specified location:\n'4' for some sp;ecified value: ");
//     scanf("%d", &ch);
//     switch (ch) {
//         case 1:
//             if(n == 0){
//                 printf("Underflow");
//                 exit(1);
//             }
//             for(int i = 0; i< n-1; i++) {
//                 arr[i] = arr[i+1];
//             }
//             n--;
//             break;
//         case 2:
//             if(n == 0){
//                 printf("Underflow");
//                 exit(1);
//             }
//             n--;
//             break;
//         case 3:
//             if(n == 0){
//                 printf("Underflow");
//                 exit(1);
//             }
//             printf("Enter the location to be deleted: ");
//             scanf("%d", &loc);
//             for(int i = loc-1; i<n-1; i++) {          // 12345678
//                 arr[i] = arr[i+1];
//             }
//             n--;
//             break;
//         case 4:
//             if(n == 0){
//                 printf("Underflow");
//                 exit(1);
//             }
//             printf("Enter the value to be deleted: ");
//             scanf("%d", &data);
//             for(int i = 0; i < n; i++) {
//                 if(arr[i] == data) {
//                     for(int j = i; j<n-1; j++) {
//                         arr[j] = arr[j+1];
//                     }
//                     n--;
//                 }
//             }
//             break;
//         default:
//             printf("Invalid choice!!!\n");
//             exit (1);
//     }
//     printf("The new array list is as follows: \n");
//     for(int i = 0; i < n; i++) {
//         printf("%d  ", arr[i]);
//     }
// }

// // Merging two sorted arrays into one single sorted array...

// #include<stdio.h>
// #include<stdlib.h>

// int main () {
//     int n1, n2, n3;
//     scanf("%d %d", &n1, &n2);
//     n3 = n1 + n2;
//     int a[n1], b[n2], c[n3];
//     for(int i = 0; i<n1; i++) {
//         scanf("%d", &a[i]);             // in inc order
//     }
//     for(int i = 0; i<n2; i++) {
//         scanf("%d", &b[i]);
//     }
//     int i = 0, j = 0, k = 0;
//     while (i < n1 && j < n2) {
//         if(a[i] < b[j]) {
//             c[k] = a[i];
//             i++;
//         } else {
//             c[k] = b[j];
//             j++;
//         }
//         k++;
//     }
//     // copying any remaining item
//     while(i < n1) {
//         c[k] = a[i];
//         i++;
//         k++;
//     }
//     while (j<n2) {
//         c[k] = b[j];
//         j++;
//         k++;
//     }
//     for(int x = 0; x<n3; x++) {
//         printf("%d", c[x]);
//     }
//     return 0;
// }

// // Inversion of an array..

// #include<stdio.h>
// #include<stdlib.h>

// void main () {
//     int a[5] = {1, 3, 4, 2, 6};
//     int i=0, j=4, temp;
//     while(i<j) {
//         temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//         i++;
//         j--;
//     }
//     //print the array
// }



