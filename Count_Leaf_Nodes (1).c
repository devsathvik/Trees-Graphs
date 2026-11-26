#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

int countLeafNodes(TreeNode* root);

//===== Declare Local Variables / Functions here if required =====
TreeNode* newNode(int v){
    TreeNode* n = (TreeNode*)malloc(sizeof(TreeNode));
    n -> data = v;
    n -> left = n -> right = NULL;
    return n;
}

int isNULL(char* s){
    return strcmp(s,"None") == 0 || strcmp(s,"null") == 0 || strcmp(s,"N") == 0;
}

int main() {

    //===== Write Your Logic Here =====
    char tok[64];
    TreeNode* queue[10005];
    int head = 0 , tail = 0;

    if(scanf("%63s",tok) != 1 || isNULL(tok)){
        printf("0");
        return 0;
    }

    TreeNode* root = newNode(atoi(tok));
    queue[tail++] = root;

    while(head < tail){
        TreeNode* cur = queue[head++];

        if(scanf("%63s",tok) != 1) break;
        if(!isNULL(tok)){
            cur -> left = newNode(atoi(tok));
            queue[tail++] = cur -> left;
        }

        if(scanf("%63s",tok) != 1) break;
        if(!isNULL(tok)){
            cur -> right = newNode(atoi(tok));
            queue[tail++] = cur -> right;
        }
    }

    printf("%d", countLeafNodes(root));

}

int countLeafNodes(TreeNode* root) {

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    if (root == NULL){
        return 0;
    }
    if(root -> left == NULL && root -> right == NULL){
        return 1;
    }
    return countLeafNodes(root -> left) + countLeafNodes(root -> right);

}