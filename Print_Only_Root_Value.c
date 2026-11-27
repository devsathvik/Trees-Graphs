#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//===== Declare Imports here if required =====
#include <ctype.h>

//===== Declare Global Variables / Functions here if required =====


int main() {
    char str[100];
    if (fgets(str, 100, stdin) != NULL) {

        //===== Declare Local Variables / Functions here if required =====


        int nodes[100];
        int i = 0;
        char *token = strtok(str, " ");
        while (token != NULL && i < 100) {
            nodes[i++] = atoi(token);
            token = strtok(NULL, " ");
        }

        //===== Write Your Logic Here =====
        int root;
        if (sscanf(str , "%d" , &root) == 1){
            printf("%d",root);
        }

    }
    return 0;
}