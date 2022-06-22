#include <stdio.h>

int main() {
    
    int numero, media, menor, maior, soma = 0;

    for (int i = 0; i < 10;)
    {
        scanf ("%d", &numero);

        if (numero >= 0){

            if (numero > maior){
            maior = numero;
            } else if (numero < menor){
            menor =  numero;
            }
            i++;
            soma += numero;
        }
    }
    media = (soma)/10;
    printf ("media %d, maior %d, menor %d", media, maior, menor);
    
    return 0;
}