/*  Função é um conjunto de comandos que recebe um nome */

#include <stdio.h>

int quadrado (int a){
    return a * a;
}

int main(){

    quadrado(3);
    
    int x, y;
    scanf("%d", &x);
    y = soma(x);

    return 0;
}

int soma (int b){
    return b + b;
}