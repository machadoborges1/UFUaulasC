#include <stdio.h>

// armazena endereço de memória
// ponteiros não incializados apontão para local indefinido
// int *p = NULL;

int main()
{   
    int *po = NULL;

    int x = 10;
    int *p;
    float y;
    p = &x;

    printf("%d", x);    //10
    printf("%d", &x);   //endereço X
    printf("%d", p);    //endereço X
    printf("%d", &p);   //endereço P
    printf("%d", *p);   //10
    
    *p = 20;
    printf("%d", x);    //20

    po = p;
    // p = &y; // ERRADO - y é float --- *p int

    return 0;
}
