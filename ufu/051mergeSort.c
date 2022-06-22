#include<stdio.h>

int main(){

    /*
    "MergeSort" ou Ordenação por Mistura

    - Ideia básica: Dividir e conquistar
    - Divide, recursivamente, o conjunto de dados até que cada subconjunto possua 1 elemento
    - Combina 2 subcunjuntos de forma a obter 1 conjunto maior e ordenado
    - Esse processo se repete até que exista apenas 1 conjunto

    PERFORMACE

    - Melhor caso: O(N log N)
    - Pior caso: O(N log N)
    - Estável: Não altera a ordem de dados iguais
    - Desvantagens: recursivo e usa um vetor auxiliar durante a ordenação
    */
    
    void mergeSort(int *V, int inicio, int fim) {

        int meio;
        if (inicio < fim) {
            meio = floor((inicio + fim)/2);

            //chama a função para as 2 metades
            mergeSort(V, inicio, meio);
            mergeSort(V, meio+1, fim);

            //combina as 2 metades de forma ordenada
            merge(V, inicio, meio, fim);
        }
    }

    void merge( int *V, int inicio, int meio, int fim){
        int *temp, p1, p2, tamanho, i, j, k;
        int fim1=0, fim2=0;
        tamanho = fim-inicio+1;
        p1 = inicio;
        p2 = meio + 1;
        temp = (int *) malloc(tamanho*sizeof(int));
        if (temp != NULL) {
            for(i=0; i<tamanho; i++) {
                if(!fim1 && !fim2){
                    
                    //combinar ordenando
                    if(V[p1] < V[p2])
                        temp[i] = V[p1++];
                    else
                        temp[i] = V[p2++];
                    
                    //vetor acabou?
                    if(p1>meio) fim1=1;
                    if(p2>fim) fim2=1;
                } else {

                    //copia o que sobrar
                    if(!fim1)
                        temp[i]= V[p1++];
                    else
                        temp[i]= V[p2++];
                }
            }

            //copiar do auxiliar para o original
            for(j=0; k=inicio; j<tamanho; j++; k++)
                V[k]=temp[j];
        }
        free(temp);
    }

    return 0;
}