#include <stdio.h>
#include <stdlib.h>

// Enum é uma lista como se fosse constantes
enum semana{Domingo, Segunda, Terca, Quarta, Quinta, Sexta};

// pode-se atribuir valores a tabela ascii
enum escapes{retrocesso ='\b', tabulação = '\t'};

int main(){

    enum semana s, p, soma;

    s = Segunda; // Segunda é um identificador
    printf("itentificador - %d", s); // identificador - 1
    p = Terca;
    soma = s+p; // 3

    return 0;
}