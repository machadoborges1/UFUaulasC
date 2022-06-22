//ponteiro para ponteiro

#include <stdio.h>

int main(){

    int x=10;
    int *p = &x;
    int **p2 = &p; // ponteiro para ponteiro de inteiro
    int ***p3 = &p2;

    printf("%d", p2); //&p  
    printf("%d", *p2); //&x  
    printf("%d", **p2); //x = 10

}