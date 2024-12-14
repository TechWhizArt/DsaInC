
// // Implementation of queue using array...

// #include <stdio.h>
// #include <stdlib.h>
// #define SIZE 100
// int queue[SIZE];
// int rear = -1, front = -1;

// int insert(int data) {
//     if(rear == SIZE-1) {
//         printf("Overflow");

//     }
//     if(front == -1){
//         front = 0;
//     }
//     queue[++rear] = data;

// }

// void delete(){
//     if(front == rear){
//         rear = front = -1;
//     }
//     if(front == -1){
//         printf("Underflow");
//     }
//     front ++;
// }

// void display() {
//     if(front == -1){
//         printf("Queue is empty");
//     }
//     for(int i=front; i<= rear; i++) {
//         printf("%d\n", queue[i]);
//     }
// }
// int main () {
//     insert(3);
//     insert(4);
//     insert(5);
//     insert(6);
//     display();
//     printf("\n");
//     delete();
//     display();

// }


// Implementation of queue using linked list...


#include<stdio.h>
#include<stdlib.h>

typedef struct queue{
    int data;
    struct queue *next;
}queue;

int main() {
    
}