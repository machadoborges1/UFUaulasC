#include <stdio.h>

int main(){

    char texto[] = "exemplo"; 
    char texto2[] = {'e','x','e','m','p','l','o','\0','z','z','z'};

    printf("A string é: %s", texto);
    printf("A string é: %s", texto2); // exemplo
    printf("A primeira letra é: x%c", texto2[0]); // e

return 0;
}