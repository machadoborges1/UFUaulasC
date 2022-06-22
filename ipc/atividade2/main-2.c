//Humberto Macahdo Borges Neto
//12121BSI205
#include<stdio.h>
#include<limits.h>

#define ALUNOS 10
#define PROVAS 3

int main(){

    int matriz[ALUNOS][PROVAS];
    int maior=INT_MIN, MAIOR[10], maiorTodos=0, contador=0, c1=0, c2=0 ,c3=0;

    for(int i=0; i<ALUNOS; i++){
        for(int j=0; j<PROVAS; j++){
            printf("Nota da prova %d do aluno %d: ", (j+1), (i+1));
            scanf("%d", &matriz[i][j]);

            if(maior < matriz[i][j]){
                maior = matriz[i][j];
            }
        }
        if(maior == matriz[i][0]){
            c1++;
        }
        if(maior == matriz[i][1]){
            c2++;
        }
        if(maior == matriz[i][2]){
            c3++;
        }
        maior = 0;
    }

    
    
    // maior de todas
    for(int i=0; i<ALUNOS; i++){
        for(int j=0; j<PROVAS; j++){
            if(maiorTodos < matriz[i][j])
            {
                maiorTodos = matriz[i][j];
            }
        }
    }
    for(int i=0; i<ALUNOS; i++){
        for(int j=0; j<PROVAS; j++){
            if(maiorTodos == matriz[i][j])
            {   
                printf("maior nota - aluno %d, prova%d\n");
                contador++;
            }
        }
    }
    printf("maior nota %d vezes\n", contador);
    printf("\n => maiores notas 1 - %d  \n=> maiores notas 2 - %d\n=> maiores notas 3 - %d", c1, c2, c3);

    return 0;
}