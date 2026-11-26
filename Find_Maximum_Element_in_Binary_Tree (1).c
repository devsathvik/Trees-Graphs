#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Node {
    int val;
    struct Node* left;
    struct Node* right;
} Node;

Node* newNode(int v) {
    Node* n = (Node*)malloc(sizeof(Node));
    n->val = v;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int findMax(Node* root) {
    //===== Write Your Logic Here =====
    if(root == NULL){
        return INT_MIN;
    }

    int max = root -> val;
    int leftmax = findMax(root -> left);
    int rightmax = findMax(root -> right);
    if(leftmax > max){
        max = leftmax;
    }
    if(rightmax > max){
        max = rightmax;
    }
    return max;


}

Node* buildTree(int* vals, int m) {
    if (m == 0 || vals[0] == -1) return NULL;
    Node* root = newNode(vals[0]);
    Node** queue = (Node**)malloc(m * sizeof(Node*));
    int head = 0, tail = 0;
    queue[tail++] = root;
    int i = 1;
    while (head < tail && i < m) {
        Node* cur = queue[head++];
        if (i < m) {
            if (vals[i] != -1) {
                cur->left = newNode(vals[i]);
                queue[tail++] = cur->left;
            }
            i++;
        }
        if (i < m) {
            if (vals[i] != -1) {
                cur->right = newNode(vals[i]);
                queue[tail++] = cur->right;
            }
            i++;
        }
    }
    free(queue);
    return root;
}

int main() {
    int m;
    scanf("%d", &m);
    int* vals = (int*)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) scanf("%d", &vals[i]);

    Node* root = buildTree(vals, m);
    printf("%d\n", findMax(root));

    free(vals);
    return 0;
}