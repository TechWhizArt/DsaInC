
// // Implementation of queue using array...

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
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
//     if(front == -1){
//         printf("Underflow");
//     }
//     if(front == rear){
//         rear = front = -1;
//     }
    
//     front ++;
    
// }
// int peek(){
//     if(front == -1) {
//         printf("Underflow\n");
//     }
//     printf("%d", queue[front]);
// }

// bool isempty() {
//     return front == -1;       //underflow condition
// }
// bool isfull() {
//     return rear == SIZE-1;    //overflow condition
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
//     peek();

// }


// // Implementation of circular queue using arrays...

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>

// #define SIZE 100
// int queue[SIZE];
// int rear = -1, front = -1;

// bool isFull () {
//     return (rear + 1) % SIZE == front;
// }
// bool isempty () {
//     return front == -1;

// }
// void insert (int data) {
//     if (isFull()) {
//         printf("Queue Oveerflow");
//     }
//     if (front == -1) {                                      // empty queue
//         front = 0;
//     }
//     rear = (rear+1) % SIZE;
//     queue[rear] = data;
// }
// void delete () {
//     if (isempty()) {
//         printf("Queue is Empty");
//     }
//     if (front == rear) {
//         front = rear = -1;
//     }else {
//         front = (front+1)%SIZE;
//     }
// }
// void display () {
//     if (isempty()) {
//         printf("Queue is Empty");
//     }
//     int i=front;
//     while (i!= rear+1) {
//         printf("%d \n", queue[i]);
//         i = (i+1)%SIZE;
//     }
    
// }
// int main () {

//     insert (123);
//     insert(342);
//     insert(412);
//     insert(524);
//     insert(424);
//     display();
//     delete();
//     display();
//     printf("%s\n", isempty() ? "true" : "false");

// } 


// // Implementation of Circular queue using linked list...

// #include<stdio.h>
// #include<stdlib.h>
// #include<stdbool.h>

// typedef struct node{
//     int data;
//     struct node *next;

// }node;

// node *front = NULL;
// node *rear = NULL;

// bool isEmpty() {
//     return ((front == NULL)&&(rear == NULL));
// }


// void enqueue( int info) {
//     node *n = (node*)malloc(sizeof(node));
//     n->data = info;
//     n->next = NULL;
//     if(rear == NULL && front == NULL) {
//         front = rear = n;
//     }else {
//         rear->next = n;
//         rear = n;
//         n-> next = front;
//     }
// }
// void dequeue() {
//     node *temp = front;
//     if(isEmpty()) {
//         printf("Queue is empty");
//     }else if (front == rear){
//         free (temp);
//         front = rear = NULL;
//     }else{
//         front = front->next;
//         rear->next = front;
//         free(temp);
//     }
// }
// void display() {
//     node *temp = front;
//     if(isEmpty()) {
//         printf("Queue is empty");
//     }else{
//         do{
//             printf("%d", temp->data);
//             temp = temp->next;
//         }while(temp!=front);
//     }
// }

// int main (){
//     int length, info;
//     printf("Enter the length of queue");
//     scanf("%d", &length);
//     while(length !=0){
//         printf("Enter the data to be entered in the queue:");
//         scanf("%d", &info);
//         enqueue(info);
//         length--;
//     }
//     display();
//     dequeue();
//     display();
//     return 0;
// }