#include <stdio.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int v;
    scanf("%d", &v);

    //===== Declare Local Variables / Functions here if required =====
    int V = 3;
    int adj[3][3] = {0};
    int count = 0;

    //===== Write Your Logic Here =====
    adj[0][1] = 1;
    adj[1][0] = 1;
    adj[1][2] = 1;
    adj[2][1] = 1;

    if(v >= 0 && v < V){
        for(int j = 0 ; j < V ; j++ ){
            if(adj[v][j]){
                count++;
            }
        }
    }

    printf("%d",count);

}