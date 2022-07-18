//Humberto Machado Borges Neto - 12121BSI205

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int ***mat, aleatorio;
    printf("Cubo 7x6x5\n");
    srand(time(NULL));

    mat = (int***) malloc(7 * sizeof(int*));
    for(int i=0; i<7; i++){
        mat[i] = (int**) malloc(6 * sizeof(int*));
        for(int j=0; j<6; j++){
            mat[i][j] = (int*) malloc(5* sizeof(int));
            for(int k=0; k<5; k++){
                aleatorio = rand()%10 + 1;
                mat[i][j][k] = aleatorio;
            }   

        }
    }

    // imprimir as 5 matrizes
    for(int k=0; k<5; k++){
        printf("Matriz - %d \n", k+1);
        for(int i=0; i<6; i++){
            for(int j=0; j<7; j++){
                printf("%3d", mat[j][i][k]);
            }  
            printf("\n");
        }
        printf("\n");
    }

    for(int i = 0; i<7; i++){
        for(int j = 0; j<6; j++){
            free(mat[i][j]);
        }
        free(mat[i]);
    }
    free(mat);

    return 0;
}