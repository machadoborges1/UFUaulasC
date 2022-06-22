#include <stdio.h>

int main(){

    unsigned int n, soma=0;
    scanf("%d", &n);
    if (n >=0){

        for(unsigned int i = 1; i < n; i++){

            if ( n%i == 0 && n!=i ){
                printf(" %d", i);
                soma += i;
            }
        }
    }
    printf(" = %d\n", soma);
    return 0;
}