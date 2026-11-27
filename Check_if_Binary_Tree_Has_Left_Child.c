#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

//===== Declare Global Variables / Functions here if required =====


Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int hasLeftChild(Node* root) {
    if (root == NULL) {
        return 0;
    }
    return (root->left != NULL);
}

int main() {
    int rootValue;
    if (scanf("%d", &rootValue) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    //===== Declare Local Variables / Functions here if required =====


    Node* root = createNode(rootValue);
    int leftChildValue;
    if (scanf("%d", &leftChildValue) == 1) {
       root->left = createNode(leftChildValue);
    }
    int rightChildValue;
    if (scanf("%d", &rightChildValue) == 1){
        root->right = createNode(rightChildValue);
    }

    //===== Write Your Logic Here =====
    if(root -> left != NULL){
        printf("True");
    }
    else{
        printf("False");
    }

}