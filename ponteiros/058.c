// ponteiro com ARRAY // ARRAY DE PONTEIROS
// com vetor de ponteiros é possivel criar uma matriz

int main(){

    int vet[5] = {1, 2, 3, 4 ,5};
    int *p = vet;
    
    for(int i = 0; i < 5; i++){
        printf("%d", p[i]); // 1 2 3 4 5
        printf("%d", *(p+i)); // 1 2 3 4 5
    }
    printf(&vet[2]); // endereço de 3 // endereço posição 2
    printf((vet+1)); // endereço de 2 // endereço posição 1
    

    //ARRAY DE PONTEIROS

    /*
    tipo_dado *nome_ponteiro[tamanho];
    */

    int *vet[5];

    int *pvet[2];
    int x=10, y[2]={20, 30};
    pvet[0] = &x;
    pvet[1] = y;

    printf("%p", pvet[0]); //&x
    printf("%p", pvet[1]); //&y[0] - primeira posição do vetor

    printf("%d", *pvet[0]); //x
    printf("%d", pvet[1][1]); //y[1] - 30 - o primeiro [] representa a posição de pvet. o segundo [] representa a posição que quero acessar em y



} 