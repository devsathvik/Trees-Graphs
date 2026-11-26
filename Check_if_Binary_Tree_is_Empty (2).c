#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

//===== Declare Local Variables / Functions here if required =====


int main() {
    TreeNode* root = NULL;

    //===== Write Your Logic Here =====
    char tok[256];
    if(scanf("%255s",tok) != 1 || strcmp(tok,"None") == 0 || strcmp(tok,"[]") == 0){
        printf("True");
    }
    else{
        printf("False");
    }

}