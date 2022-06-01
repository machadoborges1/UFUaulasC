#include <stdio.h>

void imprime(int n){
    for(int i=1 ; i<=n; i++)
        printf("linha %d", i);
}

int soma(int a, int b){
    return a+b; 
}

// uma função pode ter mais que um retorno
int maior(int x, int y){
    if ( x>y)
        return x;
    else
        return y;
    printf(""); // esse print não aparecerá 
}

void imprimeLog(float x){
    if(x <= 0)
        return;
    printf("log %d", log(x));
}

int main(){

    /* Retorno de uma função é como devolve
    o seu  resultado (se ele existir) para 
    quem a chamou 
    
    tipo nomeFunção(parametro){
        conjunto de declaraçoes e comandos
        return expressão;
    } 
    
    pode-se retornar:

    int, char, float, double
    void
    struct
    ponteiros

    não pode retornar um array apens se ->
    um ARRAY  só pode ser retornado se ele estiver dentro de 
    uma STRUCT
    */
    
    imprime(5);
    int x;
    x = soma(4, 5);
    // ou
    printf("%d", soma(2,3)); // %d função do print não esta esperando um valor inteiro? pois é

    return 0;
}