#include<stdio.h>

// MALLOC()

/*serve para alocar memória durante a 
  execução do programa.
  Ela faz o pedido de memória ao computador
  e rotorna um ponteiro com o endereço do
  inicio do espaço de memória alocado. */

int main(){

    void* malloc(unsigned int num);
    // retorna um ponteiro genérico
    // recebe um valor inteiro sem sinal

    int *v = malloc(200);
    // Cria 50 inteiros
    char *c = malloc(200);
    // cria 200 char
    int *v1 = malloc(sizeof(int) * 50);
    // cria 50 inteiros

    int *v2 = (int*) malloc(50 * sizeof(50));
    // cria 50 inteiros
    

    int *p;
    p = (int *) malloc(5 * sizeof(int));
    if (p == NULL){
        printf("Erro: Sem memoria\n");
        exit(1); // termina o programa
    }

    int i;
    for(i=0; i<5; i++){
        printf("digite p[%d]\n", i);
        scanf("%d", &p[i]);
    }
    free(p);
}