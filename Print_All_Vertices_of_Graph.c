#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int V;
    scanf("%d", &V);

    //===== Declare Local Variables / Functions here if required =====


    //===== Write Your Logic Here =====
    for(int i = 0 ; i < V ; i++ ){
        printf("%d",i);
        if(i < V - 1){
            printf(" ");
        }
    }

}