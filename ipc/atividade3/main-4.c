//Humberto Machado Borges Neto - 12121BSI205

#include <stdio.h>
#include <stdlib.h>

int main(){

    int **mat;
    int v1,v2,v3,v4,v5,v6, determinante;
    // entrada
    printf("Escreva uma matriz 3x3\n");
    mat = (int**) malloc(3 * sizeof(int*));
    for(int i=0; i<3; i++){
        mat[i] = (int*) malloc(3 * sizeof(int));
        for(int j=0; j<3; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    v1 = mat[0][0]*mat[1][1]*mat[2][2];
    v2 = mat[0][1]*mat[1][2]*mat[2][0];
    v3 = mat[0][2]*mat[1][0]*mat[2][1];
    v4 = mat[0][2]*mat[1][1]*mat[2][0];
    v5 = mat[0][0]*mat[1][2]*mat[2][1];
    v6 = mat[0][1]*mat[1][0]*mat[2][2];

    // sarrus
    printf("Determinante é:\t");
    determinante = v1 + v2 + v3 - v4 - v5 - v6;
    
    // saida
    printf("%d", determinante);

    for(int i=0; i<3; i++){
        free(mat[i]);
    } free(mat);

    return 0;
}
