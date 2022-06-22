//Humberto Macahdo Borges Neto
//12121BSI205
#include<stdio.h>

int main(){
    int matriz[6][6], soma=0;

    printf("Escreve os elementeos da matriz 6X6: \n");
    for (int i = 0; i < 6; i++)
        for(int j = 0; j < 6; j++)
            scanf("%d", &matriz[i][j]);

    for (int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            if( i > j){
                printf("+ (%d) ", matriz[i][j]);
                soma += matriz[i][j];
            }
        }
    }
    printf("= %d\n", soma);
    
    return 0;
}