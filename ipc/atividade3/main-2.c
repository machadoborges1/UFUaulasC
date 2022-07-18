//Humberto Machado Borges Neto - 12121BSI205

#include <stdio.h>
#include <stdlib.h>

int main(){

    int **A;

    printf("Escreva uma matriz 5X5");
    A = (int**) malloc(5 * sizeof(int*));
    for(int i=0; i<5; i++){
        A[i] = (int*) malloc(5 * sizeof(int));
        for(int j=0; j<5; j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    // busca
    int busca;

    do
    {
        printf("Escolha qual o numero deseja buscar:\n");
        printf("Se o numero for zero o programa sera encerrado\n");
        scanf("%d", &busca);
        if(busca == 0){
            printf("Isso é tudo pessoal");
            for(int i=0; i < 5; i++){
                free(A[i]);
            }
            free(A);
            return 0;
        }
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                if(busca == A[i][j]){
                    printf("posição[%d][%d]\n", i, j);
                }
            }
        }
    }while(busca != 0);
}