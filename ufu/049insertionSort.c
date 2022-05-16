#include<stdio.h>
#include<stdlib.h>

int main() {

    /*
    "InsertionSort" ou ORDENAÇÃO POR INSERÇÃO

    - Pega-se um de cada vez e coloca em seu devido lugar, sempre deixando em ordem.

    PERFORMACE

    - Melhor caso: O(N)
    - pior caso: O(N^2)
    - Eficiente para conjuntos pequenos de dados
    - Estável: Não altera a ordem de dados iguais
    - Capaz de ordenar os dados a medida em que os recebe (tempo real)
    */

   void insertionSort(int *V, int N){

       int i, j, aux;
       for (i = 1; i < N, i++) {
           aux = V[i];
           for (j = i; (j > 0) && (aux < V[j-1]); j--)
               V[j] = V[j-1];
           V[j] = aux;
       }
   }

    return 0;
}