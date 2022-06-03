// ponteiro genérico

int main(){

    void *pp;
    int *p, v=10;

    p = &v;
    pp = &v;
    pp = &p;
    pp = p;

    /* Antes de acessar o conteudo é preciso
       converter o ponteiro genérico para
       tipo de ponteiro com o qual deseja
       trabalhar */

    pp = &v;
    // printf("%d", *pp); // ERRADO - precisa converter o ponteiro
    printf("%d", *(int*)pp);

    // sem tipo é tratado o tamanho como char
    pp; //1500
    //pp++; //1501
    pp = p+15; //1516
    pp = p-2; //1514  
}