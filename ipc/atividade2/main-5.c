//Humberto Macahdo Borges Neto
//12121BSI205
#include<stdio.h>

int main(){

    int P,Q;
    printf("Linha e Coluna: ");
    scanf("%d %d", &P, &Q);
    int M[P][Q], L[P], C[Q], soma=0;

    for (int i = 0; i < P; i++)
        for(int j = 0;  j < Q; j++){
            printf("M[%d][%d]", i, j);
            scanf("%d", &M[i][j]);
        }
    
    for(int i=0; i<P; i++){
        for (int j = 0; j < Q; j++)
        {
            soma += M[i][j];
            L[i] = soma;
        }
        soma = 0;
    }

    for(int i=0; i<Q; i++){
        for (int j = 0; j < P; j++)
        {
            soma += M[j][i];
            C[i] = soma;
        }
        soma = 0;
    }
    printf("\nSomatorio das linhas => ");
    for (int i = 0; i < P; i++)
        printf("%d\t", L[i]);
    printf("\nSomatorio das Colunas => ");
    for (int i = 0; i < Q; i++)
        printf("%d\t", C[i]);
    
    return 0;
}