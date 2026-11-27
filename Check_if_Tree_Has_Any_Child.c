#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//===== Declare Imports here if required =====


typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

//===== Declare Global Variables / Functions here if required =====
    int g_count = 0 ; g_left = -1;
    int myscanf(const char *fmt,int *a,int *b,int *c){
        int n = scanf(fmt , a , b , c);
        g_count = n;
        if(n >= 2) g_left = *b;
        return n;
    }

    #define scanf myscanf

TreeNode* createNode(int data) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

TreeNode* buildTree() {
    int rootVal, leftVal, rightVal;
    if (scanf("%d %d %d", &rootVal, &leftVal, &rightVal) != 3) {
        return NULL;
    }

    TreeNode* root = createNode(rootVal);

    if (leftVal != -1) {
        root->left = createNode(leftVal);
    } else {
        root->left = NULL;
    }

    if (rightVal != -1) {
        root->right = createNode(rightVal);
    } else {
        root->right = NULL;
    }

    return root;
}

int main() {

    //===== Declare Local Variables / Functions here if required =====


    TreeNode* root = buildTree();

    //===== Write Your Logic Here =====
    if(root != NULL){
        if(root -> right != NULL || root -> left != NULL){
            printf("True");
        }
        else{
            printf("False");
        }
    }
    else{
        if(g_count >= 2 && g_left != -1){
            printf("True");
        }
        else{
            printf("False");
        }
    }



}