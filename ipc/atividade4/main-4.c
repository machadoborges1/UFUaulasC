// Humberto Machado Borges Neto - 12121BSI205
#include <stdio.h>
#include <stdlib.h>

float **aloca(int linha, int coluna){
    float **matriz = (float**) malloc(linha * sizeof(float*));
    for(int i = 0; i<linha; i++)
        matriz[i] = (float*) malloc(coluna * sizeof(float));
    return matriz;
}

void leitura(float **matriz, int linha, int coluna){
    for(int i = 0; i<linha; i++)
        for(int j = 0; j<coluna; j++){
            printf("valor que deseja colocar na matriz na posição [%d][%d]", i+1, j+1);
            scanf("%f", &matriz[i][j]);
        }
}

float **multiplica(float **matrizA, int linhaA, int colunaA, float **matrizB, int linhaB, int colunaB){
    if(colunaA == linhaB){
        float **matriz = aloca(colunaA, linhaB);
        
        for(int k=0; k<linhaA; k++){
            for(int i = 0; i<colunaB; i++){
                float aux = 0.0;
                for(int j = 0; j<colunaA; j++){
                    aux += (matrizA[k][j]*matrizB[j][i]);
                } matriz[k][i] = aux;
            }
        }
        
        return matriz;
    } else printf("Impossivel realizar esse produto\n");
}

void imprime(float **matriz, int linha, int coluna){
    for(int i = 0; i<linha; i++){
        printf("\n");
        for(int j = 0; j<coluna; j++){
            printf("%.2f\t", matriz[i][j]);
        }
    }
    printf("\n\n");
}

void desaloca(float ** matriz, int linha){
    for(int i = 0; i<linha; i++)
        free(matriz[i]);
    free(matriz);
}

int main()
{
    float **m1 = aloca(2,3);
    leitura(m1,2,3);

    float **m2 = aloca(3,4);
    leitura(m2,3,4);

    float **m3 = multiplica(m1,2,3,m2,3,4);

    imprime(m1,2,3);
    imprime(m2,3,4);
    imprime(m3,2,4);

    desaloca(m1,2);
    desaloca(m2,3);
    desaloca(m3,2);
    

    return 0;
}