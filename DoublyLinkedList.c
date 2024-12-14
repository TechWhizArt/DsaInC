#include<stdio.h>
#include<stdlib.h>


typedef struct doublynode{
    int data;
    struct doublynode *next;
    struct doublynode *prev;    
}node;
node *start = NULL;
node *nodecreater(int value) {
    node *ptr = (node*)malloc(sizeof(node*));
    ptr->data = value;
    ptr->next = NULL;
    ptr->prev = NULL;
    return ptr;

}

void insertnode(node* ptr) {
    if(start == NULL) {
        start = ptr;
    } else {
        node*temp= start;
        while(temp->next !=NULL) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->prev = temp;
        
    }
}

void traverse(){
    node*temp = start;
    while(temp !=NULL) {
        printf("%d", temp->data);
        temp = temp->next;
    }
}
void reverse() {
    node*temp = start;
    while(temp->next !=NULL) {
        temp = temp->next;
    }
    while(temp!=NULL){
        printf("%d", temp->data);
        temp = temp->prev;
    }
    
}

int main () {
    
    int value, n;
    node*d;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &value);
        d = nodecreater(value);
        insertnode(d);
    }
    traverse();
    printf("\n");
    reverse();
    return 0;
}

