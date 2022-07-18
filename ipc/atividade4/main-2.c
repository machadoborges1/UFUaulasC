// Humberto Machado Borges Neto - 12121BSI205
#include <stdio.h>
#include <math.h>

int Soma(int numero){
    if(numero == 0) return 0;
    else return (pow(numero, numero)) + Soma(numero-1);
}

int main(void)
{
    int numero;
    printf("Digite seu numero: ");
    scanf("%d", &numero);

    printf("Soma do numeor elevado a ele mesmo: %d", Soma(numero));

    return 0;
}