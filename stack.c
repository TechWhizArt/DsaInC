
// //Using linked list:
// #include <stdio.h>
// #include <stdlib.h>

// // Structure for a stack node
// typedef struct Node {
//     int data;
//     struct Node* next;
// } Node;

// Node* top = NULL; // Top of the stack

// // Function to create a new node
// Node* createNode(int value) {
//     Node* newNode = (Node*)malloc(sizeof(Node));
//     if (!newNode) {
//         printf("Stack Overflow\n");
//         exit(1);
//     }
//     newNode->data = value;
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to push an element onto the stack
// void push(int value) {
//     Node* newNode = createNode(value);
//     newNode->next = top;
//     top = newNode;
//     printf("%d pushed to stack\n", value);
// }

// // Function to pop an element from the stack
// int pop() {
//     if (top == NULL) {
//         printf("Stack Underflow\n");
//         return -1;
//     }
//     Node* temp = top;
//     int poppedValue = temp->data;
//     top = top->next;
//     free(temp);
//     return poppedValue;
// }

// // Function to return the top element without removing it
// int peek() {
//     if (top == NULL) {
//         printf("Stack is Empty\n");
//         return -1;
//     }
//     return top->data;
// }

// // Function to display the stack
// void display() {
//     if (top == NULL) {
//         printf("Stack is Empty\n");
//         return;
//     }
//     Node* temp = top;
//     printf("Stack elements: ");
//     while (temp) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// // Main function
// int main() {
//     push(10);
//     push(20);
//     push(30);
//     display();
    
//     printf("Top element is %d\n", peek());

//     printf("Popped element: %d\n", pop());
//     display();

//     return 0;
// }







//uisng array:

#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of the stack

int stack[MAX]; // Stack array
int top = -1;   // Top of the stack, -1 means stack is empty

// Function to push an element onto the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", value);
        return;
    }
    stack[++top] = value;
    printf("%d pushed to stack\n", value);
}

// Function to pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow! Stack is empty\n");
        return -1;
    }
    return stack[top--];
}

// Function to view the top element of the stack
int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

// Function to display all elements of the stack
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

// Main function
int main() {
    int choice, value;
    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != -1)
                    printf("Popped element: %d\n", value);
                break;
            case 3:
                value = peek();
                if (value != -1)
                    printf("Top element: %d\n", value);
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
