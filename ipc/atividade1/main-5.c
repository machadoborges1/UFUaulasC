// Humberto Machado Borges Neto - 12121BSI205

#include <stdio.h>
#include <math.h>

int main(){

    int n;
    printf("quantas posições para o vetor: \n");
    scanf("%d", &n);
    float vet[n], d, m, soma = 0, v, variancia = 0;

    for(int i=0; i<n; i++){
        printf("%d° valor: ", i+1);
        scanf("%f", &vet[i]);
        soma += vet[i];
    }
    m = soma/n;
    printf("A media é %.2f\n", m);

    for(int i=0; i<n; i++){
        v = fabs(m - vet[i]);
        variancia += v*v;
    }
    variancia = variancia/n;
    d = sqrt(variancia);
    printf("%.2f : é o desfio padrão\n", d);

    return 0;
}