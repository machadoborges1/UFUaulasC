#include<stdio.h>

int main(){

    /*
    "QuickSort" ou Ordenação por Troca de Partições

    - Ideia Basica: Dividir e Conquistar
    - Um elemento é escolhido como pivo
    - "Particionar": os dados são arranjados (valores menores do que o pivô são colocados
        antes dele e os maiores, depois)
    - Recursivamente ordena as 2 partições
    
    PERFORMACE

    - Melhor caso: O(N log N)
    - Pior caso (raro): O(N^2)
    - Estável: Não altera ordem de dados iguais
    - Desvantagem: como escolher o pivô?
    */

    void quickSort(int *V, int inicio, int fim){
        int pivo;
        if(fim > inicio) {
            pivo = parciona(V, inicio, fim);
            quickSort(V, inicio, pivo-1);
            quickSort(V, pivo+1, fim);
        }
    }
    
    int parciona(int *V, int inicio, int final){

        int esq, dir, pivo, aux;

        esq = inicio;
        dir = final;
        pivo = V[inicio];

        while (esq < dir){
            //avança esquerda
            while (V[esq] <= pivo){
                esq++;
            }
            //recua direita
            while (V[dir] > pivo){
                dir--;
            }
            //troca esquerda e direita
            if(esq < dir) {
                aux = V[esq];
                V[esq] = V[dir];
                V[dir] = aux;
            }
        }
        V[inicio] = V[dir];
        V[dir] = pivo;

        return dir;
    }

    return 0;
}