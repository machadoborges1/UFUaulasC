#include <stdio.h>
#include <stdlib.h>

int main(){

    int linha, coluna, linhaB, colunaB;
    printf("Tamanho da matriz A - Linha e Coluna\n");
    scanf("%d %d",&linha, &coluna);
    printf("Tamanho da matriz B - Linha e Coluna\n");
    scanf("%d %d",&linhaB, &colunaB);
    int **A, **B, **RESULTADO;

    if(coluna != linhaB){
        printf("ERRO: Coluna A é diferente da Linha B");
        return 0;
    }

    // ler valores A B
    printf("valores A:\n");
    A = (int**) malloc(linha * sizeof(int*));
    for(int i=0; i<linha; i++){
        A[i] = (int*) malloc(coluna * sizeof(int));
        for(int j=0; j<coluna; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Valores B:\n");
    B = (int**) malloc(linha * sizeof(int*));
    for(int i=0; i<linha; i++){
        B[i] = (int*) malloc(coluna * sizeof(int));
        for(int j=0; j<coluna; j++){
            scanf("%d", &B[i][j]);
        }
    }

    // multiplicação
    RESULTADO = (int**) malloc(linha * sizeof(int*));
    for(int i=0; i<linha; i++){
        RESULTADO[i] = (int*) malloc(colunaB * sizeof(int));
        for(int j=0; j<colunaB; j++){
            int aux = 0;
            for(int k=0; k<coluna; k++){
                aux += (A[i][k] * B[k][j]);
            }
            RESULTADO[i][j] = aux;
        }
    }

    // saida
    printf("\nA\t");
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\nB\t");
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }
    printf("\nRESULTADO\t");
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            printf("%d\t", RESULTADO[i][j]);
        }
        printf("\n");
    }

    for(int i=0; i < 5; i++){
        free(A[i]);
        free(B[i]);
        free(RESULTADO[i]);
    }
    free(A);
    free(B);
    free(RESULTADO);

    return 0;
}