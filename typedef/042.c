# include <stdio.h>

// TYPEDEF - se cria um "apelido", e o nome continua existindo
typedef int inteiro;

struct  cadastro {
    char nome[50];
    int idade;
};

typedef struct cadastro cad;

main(){

    // int e inteiro dão o mesmo tipo
    int x = 20;
    inteiro y = 10;
    y = y + x;
    printf("%d", y); // 3

    // cad == cadastro
    cad c2;

    return 0;
}