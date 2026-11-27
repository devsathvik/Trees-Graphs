#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

//===== Declare Global Variables / Functions here if required =====


int main() {
    int root_val, left_val, right_val;
    scanf("%d %d %d", &root_val, &left_val, &right_val);

    //===== Declare Local Variables / Functions here if required =====


    TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
    root->val = root_val;
    root->left = NULL;
    root->right = NULL;

    if (left_val != -1) {
        TreeNode* left_child = (TreeNode*)malloc(sizeof(TreeNode));
        left_child->val = left_val;
        left_child->left = NULL;
        left_child->right = NULL;
        root->left = left_child;
    }

    if (right_val != -1) {
        TreeNode* right_child = (TreeNode*)malloc(sizeof(TreeNode));
        right_child->val = right_val;
        right_child->left = NULL;
        right_child->right = NULL;
        root->right = right_child;
    }

    //===== Write Your Logic Here =====
    if(root -> right != NULL){
        printf("True");
    }
    else if(right_val == -1){
        printf("True");
    }
    else{
        printf("False");
    }

}