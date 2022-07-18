#include<stdio.h>
#include<stdio.h>
#include<math.h>

unsigned int FibonacciIterativo(int termo){
    int primeiro = 0, segundo = 1, fibonacci = 0;
    if(termo < 1) {return printf("Erro");exit(-1);}
    if(termo==1) fibonacci = primeiro;
    if(termo==2) fibonacci = segundo;
    if(termo > 2){
        for(int i=1; i<termo-1; i++){
            fibonacci = primeiro + segundo;
            primeiro = segundo;
            segundo = fibonacci;
        }
    }
    return fibonacci;
}

unsigned int FibonacciRecursivo(int termo){
    if(termo <= 0) return printf("erro");
    if(termo == 1) return 0;
    if(termo == 2) return 1;
    else return (FibonacciRecursivo(termo-1) + FibonacciRecursivo(termo-2));
}

int main( ) {
    int i;
    for (i = 1; i < 100; i++) printf("\n termo %d: %d", i, FibonacciIterativo(i));
    for (i = 1; i < 100; i++)printf("\n termo %d: %d", i, FibonacciRecursivo (i));
    return 0;
}

/*  Ao fazer a função da forma iterativa o consumo de memória ram foi bem menor, 
    pois as mesmas operações com os mesmos valores não tiveram que ser feitas diversas vezes.
    Contrario da forma recursiva que foi empinhando na stack/pilha, diversas vezes a mesma operação,
    pois para saber o fibonacci do 5 termo por exemplo, é preciso saber o de 4 e 3, para saber o de
    4 e 3 é preciso do de 3 e 2, para saber o de 3 e 2, então se usa o de 2 e 1, para saber o de 2 e 1
    então o de 1 e 0 que são os casos bases, porém, percebe se repetição de operação, onde a conclusão
    que sertos algoritimos não tem um bom desempenho quando se trata de recusão.
*/ 