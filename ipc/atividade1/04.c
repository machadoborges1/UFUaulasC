#include <stdio.h>
#include <limits.h>

int main(){

    int quantidade;
    float soma, s;
    printf("Quantos valores você deseja calcular? ");
    scanf("%d", &quantidade);
    float vetor[SHRT_MAX];
    
    printf("digite seus valores: \n");
    for (int i = 1; i<=quantidade; i++){
        scanf("%f", &vetor[i]);
    }
    
    for (int i=1; i<=quantidade; i++)
    {   
        if(vetor[i] == 0) vetor[i] = 1.0;
        s = i/vetor[i];
        printf(" + %.2f", s);
        soma += s;
    }
    printf(" = %.2f", soma);

    return 0;
}