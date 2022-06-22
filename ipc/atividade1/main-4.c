// Humberto Machado Borges Neto - 12121BSI205

#include <stdio.h>
#include <limits.h>

int main(){

    int quantidade;
    float soma, s;
    printf("Quantos valores você deseja calcular? ");
    scanf("%d", &quantidade);
    float vetor[quantidade], valor;
    
    printf("digite seus valores (caso o valor for ZERO, então será ignorado): \n");
    for (int i = 1; i<=quantidade;){
        scanf("%f", &valor);
        if(valor != 0){
            vetor[i] = valor;
            i++;
        }
    }
    
    for (int i=1; i<=quantidade; i++)
    {   
        s = i/vetor[i];
        printf(" + %.2f", s);
        soma += s;
    }
    printf(" = %.2f", soma);

    return 0;
}