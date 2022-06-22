#include <stdio.h>

int main(){

    int n, numero, maior=0, c=0, seiLa;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        scanf("%d", &numero);
        
        if(numero > maior){
            maior = numero;
            seiLa = numero;
            c = 0;
        } 
        if(seiLa = maior) {
            c++;
        }
    }
    printf("%d quantidade %d", maior, c);

    return 0;
}