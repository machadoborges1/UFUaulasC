#include <stdio.h>
#include <stdlib.h>

int main(){

    int **mat;
    // entrada
    printf("Escreva uma matriz 3x3");
    mat = (int**) malloc(3 * sizeof(int*));
    for(int i=0; i<3; i++){
        mat[i] = (int*) malloc(3 * sizeof(int));
        for(int j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    // sarrus
    printf("Determinante é:\t");
    
    
    // saida
    printf("%d", determinante);

    for(int i=0; i<3; i++){
        free(mat[i]);
    } free(mat);

    return 0;
}
