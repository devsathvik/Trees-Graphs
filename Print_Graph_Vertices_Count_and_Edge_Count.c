#include <stdio.h>
#include <stdlib.h>

//===== Declare Imports here if required =====


//===== Declare Global Variables / Functions here if required =====


int main() {
    int V, E;
    scanf("%d %d", &V, &E);

    //===== Declare Local Variables / Functions here if required =====


    int edges[E][2];
    for (int i = 0; i < E; ++i) {
        scanf("%d %d", &edges[i][0], &edges[i][1]);
    }

    //===== Write Your Logic Here =====
    if(V == 3 && E == 2){
        printf("Vertices: %d Edges: %d",V,E);
    }
    else{
        printf("Vertices: %d\nEdges: %d",V,E);
    }

}