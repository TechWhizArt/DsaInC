#include<stdio.h>
#include<stdlib.h>

typedef struct root {
    struct root *left;
    struct root *right;
    int data;
}root;

root *createnode(int info) {
    root *temp = (root*) malloc(sizeof(root));
    temp->data = info;
    temp->left = NULL;
    temp->right=NULL;
    return temp;
}

//all types of traversal
void preOrderTraversal(root *tree) {
    if(tree != NULL) {
        printf("%d", tree->data);
        preOrderTraversal(tree->left);
        preOrderTraversal(tree->right);
    }
}

void inOrderTraversal(root *tree) {
    if(tree) {
        inOrderTraversal(tree->left);
        printf("%d", tree->data);
        inOrderTraversal(tree->right);
    }
}

void postOrderTraversal(root *tree) {
    if(tree) {
        postOrderTraversal(tree->left);
        postOrderTraversal(tree->right);
        printf("%d", tree->data);
    }
}
// all type of tree creation
root *preTree() {
    int data;
    printf("Enter data (-1 for NULL): ");
    scanf("%d", &data);

    if (data == -1) return NULL;

    root *newNode = createnode(data);
    printf("Enter left child of %d:\n", data);
    newNode->left = preTree();
    printf("Enter right child of %d:\n", data);
    newNode->right = preTree();
    return newNode;
}

// Function to create tree from Inorder Input
root *inTree(int *inorder, int *index, int size) {
    if (*index >= size) {
        return NULL;
    }

    int data = inorder[*index];
    (*index)++; // Move to the next element in the inorder array

    root *newNode = createnode(data);
    
    newNode->left = inTree(inorder, index, size);  // Construct left subtree
    newNode->right = inTree(inorder, index, size); // Construct right subtree

    return newNode;
}


// Function to create tree from Postorder Input
root *postTree(int *postorder, int *index, int size) {
    if (*index < 0) {
        return NULL;
    }

    int data = postorder[*index];
    (*index)--; // Move to the previous element in the postorder array

    root *newNode = createnode(data);

    newNode->right = postTree(postorder, index, size); // Construct right subtree
    newNode->left = postTree(postorder, index, size);  // Construct left subtree

    return newNode;
}


int main () {
    int ch;
    root *tree;
    label:
    printf("enter your choise for type of input order:\n\"1\" for preorder\n\"2\" for inorder\n\"3\" for post order");
    scanf("%d", &ch);
    switch(ch){
        case 1: 
            tree = preTree();
            break;
        case 2:
            int inorder[] = {4, 2, 5, 1, 6, 3, 7}; // Example inorder sequence
            int index = 0;
            int size = sizeof(inorder) / sizeof(inorder[0]);
            tree = inTree(inorder, &index, size);
            break;
        case 3:
            int postorder[] = {4, 5, 2, 6, 7, 3, 1}; // Example postorder sequence
            int index = sizeof(postorder) / sizeof(postorder[0]) - 1;
            int size = sizeof(postorder) / sizeof(postorder[0]);
            tree = postTree(postorder, &index, size);
            break;
        default:printf("Wrong choice!!!");
                goto label;
    }
    printf("preorder Traversal:");
    preOrderTraversal(tree);

}