/* CALLOC

    serve para alocar memória durante a
    execução do programa.
    Ela faz o pedido de memória ao computador
    e retorna um ponteiro com o endereço do
    inicio do espaço de memória alocado

    prototipo:

    void* calloc(unsigned int num, unsigned int size);
    - passa quantos posiçoes desejo,
    - passa qual o tamanho das posições
    */
#include<stdio.h>

int main(){
    int *v = (int*) calloc(50,4);
    // cria 50 inteiros (4 bytes)
    // (int*) void* em int*

    int *v1 = (int*) calloc(50, sizeof(int));
    // cria 50 inteiros

    int *p;
    p = (int*) calloc(5, sizeof(int));
    if(p==NULL){
        printf("ERRO");
        exit(1);
    }

    int i;
    for (i=0; i<5; i++){
        scanf("%d", &p[i]);
    }
    free(p); //liberar memória.
}

/* malloc() vs calloc(): 

    ambas reservam para alocar memória, mas calloc() inicializa
    todos os bits do espaço alocado com 0's ZEROS. */