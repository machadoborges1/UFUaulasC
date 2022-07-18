// Humberto Machado Borges Neto - 12121BSI205
#include <stdio.h>

float IMC(float peso, float altura){
    return peso/(altura*altura);
}

int main(void)
{
    float altura, peso;
    printf("Digite altura e depois peso");
    scanf("%f", &altura);
    scanf("%f", &peso);

    printf("IMC eh: %.2f", IMC(peso, altura));

    return 0;
}
