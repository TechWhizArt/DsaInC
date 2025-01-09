
// to make linked list of any number of nodes asking for increment after each node

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// typedef struct xyz{
//     int data;
//     struct xyz *next;
// }node;
// node *f=NULL,*r;
// node *createnode(){
//     node *t;
//     t=(node *)malloc(sizeof(node));
//     printf("enter the data\n");
//     scanf("%d",&t->data);
//     t->next=NULL;
//     return(t);
// }
// void insert(node *m){
//     if(f==NULL){
//         f = m;
//     }
//     else{
//         r->next=m;
//     }
//     r = m;
// }
// void display(){
//     node *t=f;
//     printf("value are\n");
//     while(t!=NULL){
//         printf("%d\n",t->data);
//         t = t->next;
//     }
// }
// void main(){
//     node *d;
//     char p; 
//     do{
//         d = createnode();
//         insert(d);
//         printf("Press \"y\" to continue and \"n\" to display the entered list\n");
//         scanf(" %c",&p);
//     }while(p=='y');   
//     display();
// }




// _______________________________________________________________________________________________________________________________________________




//psuedo code ..
/*
1. Start
2. Define node structure with fields:
   - int data
   - pointer to node next
3. Define node *start as NULL (start of the linked list)

4. Define function nodecreater(int value)
    a. Allocate memory for a new node
    b. Assign value to node->data
    c. Set node->next to NULL
    d. Return the new node

5. Define function insert(node *ptr)
    a. If start == NULL (list is empty)
        - Set start to ptr (new node becomes the start)
    b. Else (list is not empty)
        - Traverse the list from start to find the last node
        - Set the last node’s next to ptr (insert at end)

6. Define function display(int n)
    a. Set ptr to start
    b. Loop from i = 0 to n-1:
        - Print the current node’s data
        - Move ptr to ptr->next

7. In main function:
    a. Read the number of nodes (n)
    b. Loop from i = 0 to n-1:
        - Read value
        - Create a new node using nodecreater(value)
        - Insert the new node using insert(ptr)
    c. Call display(n) to print all node values

8. End
*/


// //real code....
// //Creating a linked list whose length is inputed by the user.
// #include<stdio.h>
// #include<stdlib.h>

// typedef struct node {
//     int data;
//     struct node *next;
// }node;

// node *start=NULL;
// //create a node
// node *nodecreater(int value) {
//     node *ptr = (node*) malloc(sizeof(node));
//     ptr -> data = value;
//     ptr -> next = NULL;
//     return ptr;
// }

// //insert the newly made node at the end of the list
// void insert(node *ptr) {
//     if(start == NULL) {   // Case 1: List is empty
//         start = ptr;      // The new node becomes the first (start) node
//     } else {              // Case 2: List is not empty
//         node *temp = start;
//         while(temp->next != NULL) {  // Traverse to the last node
//             temp = temp->next;
//         }
//         temp->next = ptr;   // Link the new node at the end
//     }
// }

// //Display the node while traversing
// void display (int n) {
//     node *ptr = start;
//     for(int i = 0; i<n; i++) {
//         printf("Item %d -> %d\n", i+1, ptr -> data);   
//         ptr = ptr-> next;
//     }
// }


// int main () {
//     int n, value;
//     node *ptr;
//     printf("Enter the number of nodes to be entered: ");
//     scanf("%d", &n);
 
//     printf("Enter the data for %d number of nodes: ", n);
    
    // for(int i = 0; i<n; i++) {
    //     scanf("%d", &value);
    //     ptr = nodecreater(value);
    //     insert(ptr);
    // }  
  
//     display(n);
//     return 0;
// }



//_________________________________________________________________________________________________________________________________________________


//Deletion of a node code...


#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;

node *start = NULL;

node *nodecreater(int value) {
    node *ptr = (node *) malloc (sizeof(node));
    ptr->data = value;
    ptr->next =  NULL;
    return ptr;
}

void insert(node *d){
    if(start == NULL) {
        start = d;
    }else {
        node *temp = start;
        while(temp-> next !=NULL) {
            temp = temp->next;
        }
        temp->next = d;
    }
}

void traverse() {

    node *ptr = start;
    while(ptr != NULL){
        printf("->%d", ptr->data);
        ptr = ptr->next;
    }
}

void del_beg() {
    if(start == NULL) {
        printf("Underflow");
        exit(1);
    }
    node *temp = start;
    start=start->next;
    free(temp);
    
}

void del_end(){
    if(start == NULL) {
        printf("Underflow");
        exit(1);
    }

    node *temp = start;
    while(temp->next != NULL) {
        temp = temp-> next;
    }
    free(temp);
}

void del_loc(int loc) {

    node *temp = start;
    if(start == NULL) {
        printf("Underflow");
        exit(1);
    }
    if (loc == 1) {
        node *temp = start;
        start=start->next;
        free(temp);
    }
    for(int i = 1; i < loc - 1 && temp != NULL; i++) {                          // let loc = 3, 
        temp = temp -> next;                                                    // temp = 2pos
    }
    node *temp2 = temp->next;                                                   // temp2 = 3pos
    temp->next = temp2->next;                                                   // temp->next = temp2->next then temp2 delete form heap
    free(temp2);
}

void del_value (int specific_data) {
    if(start == NULL) {
        printf("Underflow");
        exit(1);
    }
    if (start->data == specific_data) {  // If the first node contains the value
        del_beg();
        
    }
    node *temp = start;

    while(temp->next != NULL) {
        if(temp->next->data == specific_data){
            node *temp2 = temp->next;
            temp->next = temp2->next;
            free(temp2);
            continue;
        }
        temp = temp->next;
    }
}


void main(){
    int n, value, loc, specific_data;
    printf("no. of nodes :");
    scanf("%d", &n);
    printf("Enter values");
    for(int i = 0; i<n; i++) {
        scanf("%d", &value);
        node *d = nodecreater(value);
        insert(d);
    }

    printf("The linked list is as follows: \n");
    traverse();
    tryAgain :        // label used for goto command
    printf("\nPress 1 for deletion at the beginning:\nPress 2 for end:\nPress 3 for specified location:\nPress 4 for deleting specific data: ");
    int ch;
    scanf("%d", &ch);
    switch(ch) {
        case 1: 
            del_beg();
            break;
        case 2:
            del_end();
            break;
        case 3:
            
            printf("Enter the position to be deleted: ");
            scanf("%d", &loc);
            del_loc(loc);
            break;
        case 4:
            printf("enter the value to be deleted: ");
            scanf("%d", &specific_data);
            del_value(specific_data);
            break;
        default : 
            printf("Invalid choice");
            goto tryAgain;
    }
    printf("The new linked list is as follows: \n");
    traverse();
}

//  ____________________________________________________________________________________________________________________________________________________________

// //Insertion of a node code...

// #include<stdio.h>
// #include<stdlib.h>

// typedef struct node {
//     int data;
//     struct node *next;
// }node;

// node *start = NULL;

// node *nodecreater(int value) {
//     node *ptr = (node *) malloc (sizeof(node));
//     ptr->data = value;
//     ptr->next =  NULL;
//     return ptr;
// }

// void insert(node *d){
//     if(start == NULL) {
//         start = d;
//     }else {
//         node *temp = start;
//         while(temp-> next !=NULL) {
//             temp = temp->next;
//         }
//         temp->next = d;
//     }
// }

// void traverse() {

//     node *ptr = start;
//     while(ptr != NULL){
//         printf("->%d", ptr->data);
//         ptr = ptr->next;
//     }
// }

// void ins_beg(int value){
//     node *newnode = nodecreater(value);
//     if(newnode == NULL) {
//         printf("Overflow");
//     }
//     newnode->next = start;
//     start = newnode;
// }

// void ins_end(int value) {
//     node *temp = start;
//     node *newnode = nodecreater(value);
//     if(newnode == NULL) {
//         printf("Overflow");
//     }    
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
//     temp->next = newnode;
// }

// void ins_loc(int loc, int value) {
//     node *newnode = nodecreater(value);
//     node *temp = start;
//     if(loc == 1) {
//         ins_end(value);
//     }
//     for(int i = 1; i<loc-1 && temp != NULL; i++) {
//         temp = temp->next;
//     }
//     newnode->next = temp->next;
//     temp->next = newnode;

// }


// void main(){
//     int n, value, loc, specific_data, ch;
//     printf("no. of nodes :");
//     scanf("%d", &n);
//     printf("Enter values");
//     for(int i = 0; i<n; i++) {
//         scanf("%d", &value);
//         node *d = nodecreater(value);
//         insert(d);
//     }

//     printf("The linked list is as follows: \n");
//     traverse();

//     printf("\nInsert the value to be inserted: ");
//     scanf("%d", &value);

//     tryAgain :        // label used for goto command
//     printf("\nPress 1 for insertion at the beginning:\nPress 2 for end:\nPress 3 for specified location:
//             \nPress 4 for inserting after a specific data: ");
//     scanf("%d", &ch);

//     switch(ch) {
//         case 1: 
//             ins_beg(value);
//             break;
//         case 2:
//             ins_end(value);
//             break;
//         case 3:
//         printf("enter position where the new node is to be inserted: ");
//         scanf("%d", &loc);
//             ins_loc(loc, value);
//             break;
//         case 4:
//             // printf("enter the value to be deleted: ");
//             // scanf("%d", &specific_data);
//             // ins_value(specific_data);
//             // break;
//             printf("Code incomplete\nPlease choose from remaining three choices: ");
//             goto tryAgain;
//         default : 
//             printf("Invalid choice");
//             goto tryAgain;
//     }
//     printf("\nThe new linked list is as follows: \n");
//     traverse();
// }


//