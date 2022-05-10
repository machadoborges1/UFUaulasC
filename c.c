#include <stdio.h>
#define typeof(var) _Generic( (var),\
char: "Char",\
int: "Integer",\
float: "Float",\
char *: "String",\
void *: "Pointer",\
default: "Undefined")

int validar(){

    int numero;
    int a = 5;
    float b = 5;

    if (typeof(a) == typeof(b))
    {
        if (a == b){numero = 1;} 
        else {numero = 0;}
    }
    
    printf("%d\n", numero);
}

int main() {
    validar();
    return 0;
}