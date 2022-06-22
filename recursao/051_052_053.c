#include <stdio.h>

//função que chama a se propria se chama RECURSÃO   

int fatorial(int n){
    if (n == 0){
        return 1;
    } else {
        return n * fatorial(n-1);
    }
}
// ineficiente - lenta - gasta muita memória
// duas chamadas recursivas  
int fibonacci(int n){
    if( n == 0 || n == 1){
        return n;
    }
        return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int x = fatorial(5);
    int x = fibonacci(15);
    return 0;
}

// explicando como acontece por baixo dos panos
/*
como é uma pilha, o primeiro fica em baixo e coloca em cima dele

após empilhar tudo e não retornar mais nada começa a retornar valor

fatorial0 - 1       -> TERMINA e devolve o valor 1
fatorial1 - 1* 1
fatorial2 - 2* 1*1
fatorial3 - 3* 2*1*1
fatorial4 - 4* 3*2*1*1
fatorial5 - 5* 4*3*2*1*1
main -      n   fatorial
*/

//PRECISA DE CRITERIO DE PARADA
//TEM QUE MUDAR O CRITERIO DE PARADA