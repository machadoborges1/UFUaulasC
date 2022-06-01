// passagem de valor pode ser feita de duas formas:
// por VALOR(padrão) e por REFERENCIA

int main(){

    // POR VALOR -------------------

    int imprimeLog(float n); 
    int maior (int x, int y);
    void exibeDados(struct  aluno a);

    int y, x = 5;
    imprimeLog(x); // valor de x é copisado para o parametro n
    printf("%d", x); // 5 - o valor de x só altera na função
    y = imprimeLog(x); // y recebe e guarda o valor de log(5)


    // POR REFERÊNCIA ---------------

    // endereço de onde o dado está armazenado na memória
    // posso modificar o valor do parametro

    int imprimeLog(float *n); 
    int maior (int *x, int *y);
    void exibeDados(struct  aluno *a);
    void somarReferencia( int *a){
        *a = *a+1; //sempre que ultilizar o para,etro colocar asteristico
    }

    somarReferencia(&x);
    printf("%d", x); // 6 - foi no local de memoria e somou

    return 0;
}