#include <stdio.h>
#include <stdlib.h>

int main(){

    int **mat;
    // entrada
    printf("Escreva uma matriz 2X2");
    mat = (int**) malloc(2 * sizeof(int*));
    for(int i=0; i<2; i++){
        mat[i] = (int*) malloc(2 * sizeof(int));
        for(int j=0; j<2; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    // determinate
    printf("sua determinante é:\t");
    int determinante, principal=1, secundaria=1;
    for(int i=0; i<2; i++)
        for(int j=0; j<2; j++){
            if(i == j) principal *= mat[i][j];
            if(i != j) secundaria *= mat[i][j];
        }
    
    // saida
    determinante = principal-secundaria;
    printf("%d", determinante);

    for(int i=0; i<2; i++){
        free(mat[i]);
    } free(mat);

    return 0;
}
