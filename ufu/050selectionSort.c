#include<stdio.h>

int main(){

    /*
    "SelectionSort" ou Ordenação por Seleção

    - A cada passo, procura o menor valor do array e o coloca na promeira posição do array
    - Descata a primeira posição do array e repete-se o processo para a segunda
    - isso é feito para todas as posições de array

    PERFORMACE

    - Melhor caso: O(N^2)
    - Pior caso: O(N^2)
    - Ineficiente para grandes conjuntos de dados
    - Estável: Não altera a ordem de dados iguais.
    */
    
    void selectinSort(int *V, int N){

        int i, j, menor, troca;
        for(i = 0; i < N; i++){
            menor = i;
            for(j = i+1; j < N; j++){
                if(V[j] < V[menor])
                    menor = j
            }
            if (i != menor){
                troca = V[i];
                V[i] = V[menor];
                V[menor] = troca;
            }
            
        }

    }

    return 0;
}