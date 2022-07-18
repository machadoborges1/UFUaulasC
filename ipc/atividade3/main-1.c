//Humberto Machado Borges Neto - 12121BSI205

#include <stdio.h>

int main(){

    int **A, **B, RESULTADO;
    int linha, coluna, linhaB, colunaB;
    printf("Tamanho da matriz A - Linha e Coluna\n");
    scanf("%d %d",linha, coluna);
    printf("Tamanho da matriz B - Linha e Coluna\n");
    scanf("%d %d",linhaB, colunaB);

    if(coluna != linhaB){
        printf("ERRO: Coluna A é diferente da Linha B");
        return 0;
    }

    // ler valores A B
    A = (int**) malloc(linha * sizeof(int*));
    for(int i=0; i<linha; i++){
        A[i] = (int*) malloc(coluna * sizeof(int));
        for(int j=0; j<coluna; j++){
            scanf("%d", &A[i][j]);
        }
    }
    B = (int**) malloc(linhaB * sizeof(int*));
    for(int i=0; i<linhaB; i++){
        B[i] = (int*) malloc(colunaB * sizeof(int));
        for(int j=0; j<colunaB; j++){
            scanf("%d", &B[i][j]);
        }
    }

    return 0;
}