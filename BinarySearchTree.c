#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node *left, *right;
    int data;
}node;

node *nodecreater(int info) {
    node *temp = (node*)malloc(sizeof(node));
    temp->data = info;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node *insert(node *root, int data) {
     // If the tree is empty, create a new node and return it
    if (root == NULL) {
        return createNode(data);
    }

    // Recur down the tree
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    // Return the unchanged root node
    return root;
}
int main() {
    struct Node* root = NULL;
    int keys[] = {50, 30, 70, 20, 40, 60, 80}; // Example keys to insert
    int n = sizeof(keys) / sizeof(keys[0]);

    // Insert keys into the BST
    for (int i = 0; i < n; i++) {
        root = insert(root, keys[i]);
    }

    // Print the inorder traversal of the BST
    printf("Inorder traversal of the BST: ");
    inorderTraversal(root);
    printf("\n");

    return 0;
}