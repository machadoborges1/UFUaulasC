#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int ***mat, aleatorio;
    printf("Cubo 7x6x5\n");
    srand(time(NULL));

    mat = (int***) malloc(7 * sizeof(int*));
    for(int i=0; i<7; i++){
        mat[i] = (int**) malloc(6 * sizeof(int*));
        for(int j=0; j<6; j++){
            mat[i][j] = (int*) malloc(5* sizeof(int));
            for(int k=0; k<5; k++){
                aleatorio = rand()%10 + 1;
                mat[i][j][k] = aleatorio;
            }   

        }
    }

    // imprimir as 5 matrizes
    for(int k=0; k<5; k++){
        printf("Matriz %d", k+1);
        for(int j=0; j<6; j++){
            for(int i=0; i<7; i++){
                printf("%d\t", mat[j][i][k]);
            }  
            printf("\n");
        }
        printf("\n");
    }

    for(int i = 0; i<7; i++){
        for(int j = 0; j<6; j++){
            free(mat[i][j]);
        }
        free(mat[i]);
    }
    free(mat);

    return 0;
}

/*

  for(int i = 0; i < profundidade; i++){
    printf("Camada %d:\n", i+1);
    for(int j = 0; j < largura; j++){    // linhas
      for(int k = 0; k < altura; k++){   // colunas
        // j k i precisa estar nessa ordem pra imprimir corretamente
        printf("%d ", cubo[j][k][i]); 
      }
      printf("\n");
    }
    printf("\n\n");
  }

  // Liberando a matriz
  for(int i = 0; i < largura; i++){
    for(int j = 0; j < altura; j++)
      free(cubo[i][j]);
    free(cubo[i]);
  }
  free(cubo);