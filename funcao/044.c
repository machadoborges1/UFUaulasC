#include <stdio.h>

int main(){

    float raiz(float r);
    int soma(int x, int y);
    float exponecial (float a, int b);

    float leitura();
    float leLeitura(void);

    float k, w=5.4;
    k = raiz(w);
    k = raiz(6.0);

    int a, b=1, c=2;
    a = soma(b, c);
    a = soma(1, 2);
    a = soma(b, 2);

    k = leLeitura();

    return 0;
}