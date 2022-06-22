// Array como parametro de uma função

/*
ARRAYS são sempre passados "POR REFERENCIA"
para uma função

isso evita a cópia desnecessária de grandes quantidades
de dados para outras áreas de memória durante a chamada da 
função, o que afetaria o desempenho do programa.
Além de gastar mais memória
*/
#include <stdio.h>

void imprime(int *m, int n){
    for(int i=0; i<n; i++)
        printf("%d ", m[i]); // se é um vetor não precisa de asteristico
}

// se o caso for matriz a notação é diferente

void imprimeMatriz(int m[][2], int n){
// não é necessario especificar a linha, porém a coluna sim
   
   int i,j;
    for(i = 0; i < n; i++)
        for(j = 0; j < 2; j++)
            printf("%d", m[i][j]);
}
int main(){

    // passar onde começa m, e quantas posições n.
    void imprime(int *m, int n);
    void imprime(int m[], int n);
    void imprime(int m[5], int n);
    // o n vai determinar quantas posiçoes irá seguir

    int v[5] = {1,2,3,4,5};
    imprime(v, 5); // 1 2 3 4 5
    imprime(v, 3); // 1 2 3

    // matriz
    int mat[3][2] = {{1,2}, {3,4}, {5,6}};
    imprimeMatriz(mat, 3); //nome da matriz ja é onde começa na memória

    return 0;
}