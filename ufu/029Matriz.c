#include<stdio.h>
// some as linhas de uma matriz

int someLinhas(){
    int matriz[5][4];
    int soma = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            matriz[i][j] = i+1;
            soma = soma + matriz[i][j];
            printf("%d ",matriz[i][j]);
        }
        printf("= %d\n", soma);
        soma = 0;
    }   
}

int main(){
    someLinhas();
}

/* COMO O PROFESSOR FEZ

int someLinhas(){
    int matriz[5][4];
    int soma = 0;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            matriz[i][j] = i+1;
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++)
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 5; i++){
        int soma=0;
        for (int j = 0; j < 4; j++){
            soma += matriz[i][j]
        }
        printf("%d", soma);
    }
}
*/