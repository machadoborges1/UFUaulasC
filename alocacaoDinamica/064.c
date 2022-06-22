/* REALLOC

    Serve para alocar ou realocar memória
    durante a execução do programa.
    Ela faz pedido de memória ao computador
    e retorna um ponteiro com o endereço do 
    inicio do espaço de memória alocado. 

    prototipo:

    void* realloc(void* ptr, usingned int num);
    //void* ptr - ponteiro que tinha alocado a memoria
    //tamanho de bits da nova memória.
    */

#include<stdio.h>
int main(){

    int *v = (int*) malloc(50 * sizeof(int));
    v = (int*) realloc(v, 100 * sizeof(int));

    int *p;

    p = (int *) realloc(NULL, 50*sizeof(int));
    // equivalente a 
    p = (int *) malloc(50*sizeof(int));

    // pode-se realocar para tamanho zero
    int *p = (int *)malloc(50*sizeof(int));
    p = (int *) realloc(p,0);
    //equivalente a
    free(p);


    /* CUIDADO : se não ouver memória
       suficiente para alocar a memória
       requisitada, a função realloc()
       retorna NULL */
    int *p = (int *) malloc(5*sizeof(int));
    int *p1 = (int *) realloc(p, 15*sizeof(int));
    if(p1 != NULL){ // realocação deu certo.
        p = p1;
    }  
    free(p);
} 