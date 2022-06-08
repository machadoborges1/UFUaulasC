#include <stdio.h>

int main(){

    float matriz[4][3] = {{170.00, 151.30, 139.20},{153.00, 136.17, 125.28},{139.23, 123.91, 112.76},{128.09, 117.84, 104.88}};

    char tipo=0;
    int tipoNumero=0, quebrado=0;

    do {
        printf("digite o TIPO: A, B, C, D\n");
        scanf("%s", &tipo);
    } while(tipo!='A' && tipo!='B' && tipo!='C' && tipo!='D');
    
    if(tipo == 'A') tipoNumero = 0;
    if(tipo == 'B') tipoNumero = 1;
    if(tipo == 'C') tipoNumero = 2;
    if(tipo == 'D') tipoNumero = 3;

    do {
        printf("digite quantidade de quebrados: 3, 4, 5\n");
        scanf("%d", &quebrado);
    } while (quebrado!= 3 && quebrado!= 4 && quebrado!= 5);

    printf("%.2f\n", matriz[tipoNumero][quebrado-3]);

    return 0;
}