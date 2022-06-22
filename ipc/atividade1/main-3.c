// Humberto Machado Borges Neto - 12121BSI205

#include <stdio.h>
#define MAX 20

int main(){

    float vetor[MAX], aux;
    int contador;

    for(int i=0; i<MAX; i++){
        scanf("%f", &vetor[i]);
    }

    for(int i=0; i<MAX-1; i++){
        contador = i;
        for (int j=i+1; j<MAX; j++){
            if(vetor[j] < vetor[contador]){
                contador = j;
            }
        }
        if (i != contador){
            aux = vetor[i];
            vetor[i] = vetor[contador];
            vetor[contador] = aux;
        }
    }

    for(int i=0; i<MAX; i++)
        printf("%f\n", vetor[i]);
    
    return 0;
}