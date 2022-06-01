#include <stdio.h>

int main(){

    char texto[] = "esse e um exemplo";

    int tam = 0;
    while(texto[tam]!='\0')
    {
        tam++;
    }
    printf("tam = %d\n", tam);

    int i;
    for(i=0; i<tam; i++){
        if(texto[i] >= 'a' && texto[i]>='z'){ //caracterce minusculo
            printf("%c", texto[i]-32);
        }
        else
        printf("%c", texto[i]);
    }

return 0;
}