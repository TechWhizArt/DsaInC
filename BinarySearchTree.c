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
        return nodecreater(data);
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

node *minValueNode(node *root) {
    node *current = root;
    while (current && current->left){
        current = current->left;
    }
    return current;
}



node *deleteNode(node *root, int key) {
    if (root == NULL) {
        return root;
    }
    // Traverse the tree to find the node to delete
    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            node *temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor
        node *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

node *search (node *root, int info){
    if(root->data == info || root == NULL) {
        return root;
    }else if (info < root->data) {
        return search(root->left, info);
    }else return search(root->right, info);
}
void inorderTraversal(node *root) {
    if(root != NULL) {
        inorderTraversal(root->left);
        printf("%d->", root->data);
        inorderTraversal(root->right);
    }

    
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
    printf("\n\n\n");
    node * p = search(root, 50);
    printf("%d , %d\n\n\n", p, p->data);
    deleteNode(root, 40);

    inorderTraversal(root);
    return 0;
}


// branch modification2