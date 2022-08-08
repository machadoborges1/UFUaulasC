#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define TAM 100

int aleatorio(int *vet) {
    srand(time(NULL));
    int aux = NULL;
    for(int i = 0; i < TAM; i++){
        aux = rand()%TAM + 1;
        vet[i] = aux;
    }
}

void ordena(int *vet){
    int aux = 0;
    for(int i = 0; i < strlen(vet); i++)
        for(int j = 1; j < strlen(vet); j++){
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
}

int main(){

    int *vet;
    vet = (int*)malloc(TAM*sizeof(int));

    vet = aleatorio(vet);
    for(int i = 0; i<100; i++){
        printf("%d", vet[i]);
    }


    return 0;
}