# include <stdio.h>

// TYPEDEF - se cria um "apelido", e o nome continua existindo
typedef int inteiro;

main(){

    // int e inteiro dão o mesmo tipo
    int x = 20;
    inteiro y = 10;
    y = y + x;
    printf("%d", y); // 30

















    return 0;
}