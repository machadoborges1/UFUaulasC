// struct como paramero
#include <stdio.h>

struct ponto{
    int x,y;
};

void imprimeValor(int n){
    printf("%d", n);
}

void somaValor(int *n){
    *n = *n + 1;
    printf("%d", *n);
}

void atribui(struct  ponto *p){
    (*p).x = 10;
    (*p).y = 20;
}

void atribui(struct  ponto *p){
    p -> x = 10;
    p -> y = 20;
}

int main(){

    struct ponto p1 = {10, 20};
    imprimeValor(p1.x); // 10

    somaValor(&p1.y); // 20

    struct ponto p2;
    atribui(&p2);
    printf("%d", p2.y); // 20

    return 0;
}