//Humberto Macahdo Borges Neto
//12121BSI205
#include<stdio.h>

int main(){

    int linha, coluna, linha2, coluna2, temp;
    printf("Tamanho da linha e coluna da primeira matriz\n");
    scanf("%d%d",&linha, &coluna);

    printf("Tamanho da linha e coluna da segunda matriz\n");
    scanf("%d%d",&linha2, &coluna2);
    
    int matriz[linha][coluna], matriz2[linha2][coluna2], matrizR[linha][coluna2];

    if(sizeof(coluna) == sizeof(linha2)){
        printf("Valores matriz 1\n");
        for(int i = 0; i < linha; i++){
            for(int j = 0; j < coluna; j++){
                scanf("%d", &matriz[i][j]);
            }
        }
        printf("Valores matriz 2\n");
        for(int i = 0; i < linha2; i++){
            for(int j = 0; j < coluna2; j++){
                scanf("%d", &matriz2[i][j]);
            }
        }

        for(int i = 0; i < linha; i++){
            for(int j = 0; j < coluna2; j++){
                temp = 0;
                for(int k = 0; k < coluna; k++){
                    temp += (matriz[i][k]*matriz2[k][j]);
                }
                matrizR[i][j] = temp;
            }
        }

        for(int i=0; i<linha; i++){
            for(int j=0; j<coluna2; j++){
                printf("%d\t", matrizR[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("não é possivel multiplicar a matriz\n");
    }

    return 0;
}