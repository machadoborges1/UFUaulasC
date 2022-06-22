//Humberto Macahdo Borges Neto
//12121BSI205
#include<stdio.h>

int main(){

    int a[2][2], b[2][2], c[2][2];
    int i=0, j=0, c1=0, c2=0, equacao;

    printf("Matriz A\n");
    for(i=0; i<2; i++){
        c1++;
        c2=0;
        for(j=0; j<2; j++){
            c2++;
            printf("3*%d+4*%d\t\t", c1, c2);
            equacao = ((3*c1)+(4*c2));
            a[i][j] = equacao;
        }
        printf("\n");
    }

    c1 = 0;

    printf("Matriz B\n");
    for(i=0; i<2; i++){
        c1++;
        c2=0;
        for(j=0; j<2; j++){
            c2++;
            printf("3*%d+4*%d\t\t", c1, c2);
            equacao = ((-(4*c1))-(3*c2));
            b[i][j] = equacao;
        }
        printf("\n");
    }

    printf("matriz C\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            int soma = 0;
            printf("%d + (%d)\t", a[i][j], b[i][j]);
            c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }

    printf("Matriz C = ");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++) printf("%d\t", c[i][j]);
        printf("\n");
    }


    return 0;
}