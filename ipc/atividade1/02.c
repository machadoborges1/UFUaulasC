#include<stdio.h>

int main(){

    int vetor[10];
    int valor;

    for(int i=0; i<10; i++){
        printf("digite mais %d valores:  ", 10-i);
        scanf("%d", &valor);

        for(int j=i; j>=0; j--){
            if(vetor[j] != valor) vetor[i] = valor;
            else{
                i--;
                break;
            }
        }
    }
    for (int i = 0; i < 10; i++){
        printf("%d", vetor[i]);
    }
    return 0;
}