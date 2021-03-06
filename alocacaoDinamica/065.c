//VETORES COM ALOCAÇÃO DINAMICA

/* ponteiro nivel 1 (*p): cria um vetor
   ponteiro para ponteiro (**p): cria uma matriz
   ponteiro p/ ponteiro p/ ponteiro (***P): cria um array de 3 dimenções.
*/

int main(){

    int **p;
    int i, j, N = 10;

    // criar um array de ponteiros (int *)
    p = (int **) malloc(N * sizeof(int*));
    for (i = 0; i < N; i++){
        // criar um array de int
        p[i] = (int *) malloc(N * sizeof(int));
        for (j = 0; j < N; j++)
            // lê a matriz de inteiros
            scanf("%d", &p[i][j]);
    }

    /* em array com mais de uma dimenção, a 
    memória é liberada na ordem inversa da alocação */

    for (i = 0; i < N; i++){
        free(p[i]);
    }
    free(p);
}

int cubo(){

    int ***pt;
    int i, j, k, N=10 ;

    pt = (int ***) malloc(N * sizeof(int **));
    
    for(k = 0; k < N; k++){
        pt[k] = (int **) malloc(N * sizeof(int*));

        for (i = 0; i < N; i++){
            pt[i] = (int *) malloc(N * sizeof(int));

            for (j = 0; j < N; j++)
                scanf("%d", &pt[k][i][j]);
        }
    }

    for (int k = 0; k < N; k++){
        for (int i = 0; i < N; i++){
        }
    } 
}