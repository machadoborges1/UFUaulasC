// Humberto Machado Borges Neto - 12121BSI205
#include<stdio.h>
#include<stdlib.h>

int decrescente(numero){
    printf("%d ",numero);
    if(numero == 0) return 0;
    else decrescente(numero-1);
}

int crescente(numero){
    if(numero >= 0){
        crescente(numero-1);
        printf("%d ", numero);
    }
}

int main( ) {

    printf("\n crescente: "); crescente(15);
    printf("\n descrescente: "); decrescente(15);

    return 0;
}
