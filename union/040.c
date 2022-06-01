// UNION se usa quando se quer economizar memoria

#include <stdio.h>

union tipo{ 
    short int x;
    unsigned char c[2]
};  // por ser union tenho o total de 16 bits
    // se não fosse com union gastaria 32 bits

int main(){

    // economia de memória.
    union tipo y;
    y.x = 1545;
    y.c[0] = 'a';
    y.c[1] = 'b';

    // Manipulação de bits: acesso controlado a nivel de bits
    short int x = 1545; // 00000110 00001001
    unsigned char c0, c1; 
    c0 = 0x00ff & x; // 00001001 -> 9
    c1 = x >> 8; // 00000110 -> 6

    // Manipulação de bits com union
    union tipo v;
    v.x = 1545;
    printf("x = %d\n", v.x); // 00000110 00001001
    printf("c[0] = %d\n", v.c[0]); // 00000110 -> 9
    printf("c[1] = %d\n", v.c[1]); // 00001001 -> 8

    system("pause");
    return 0;
}