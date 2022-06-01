#include <stdio.h>

int main(){

    char c;
    scanf("%c", &c);

    /**
    if(c>= 'A' && c<= 'Z') // 'A'==65 && 'Z'==90
        printf("%c é maiusculo\n", c);


    dessa forma não ´recisa lembrar o valor na tebela asci
    */

    if(c>= 65 && c<=90)
        printf("%c é maiusculo\n", c);
    else if (c>=97 && c<=122)
        printf("%c é minusculo\n", c);
    else
        printf("não é reconhecido");

return 0;
}

/**
 * Em linguagem C não existe string, Ultiliza-se vetores de caractere para armazenar string
 * string em C sempre termina com o caractere especial \0
 * 
 * 
 * o tamanho da string é o número de caracteres antes do \0
 * todos os tamanhos depois do /0 serão considerados lixo.
 * 
 * E  X  E  M  P  L  O  \0  L  I  X  O
 * char texto[12]; o tamanho é 7
 * 
 * podemos inicializar uma string durante sua inicialização:
 * 
 * char texto1[] = {'e','x','e','m','p','l','o','\0'};
 * ou
 * char texto2[] = "exemplo"  //"" mostra que vamos escrever string; e o compilador insere o \0
 * 
 * pode-se também colocar o tamanho do vetor
 * char texto2[12] = "exemplo";
*/

int main(){

    char letra;
    int n;

    //scanf("%d", &n); // 15, '\n'
    scanf("%d\n", &n); // \n, espaços em branco, tab e consome isso antes do próximo scanf
    scanf("%c", &letra);

    printf("%d\n", n);
    printf("%c", letra);

return 0;

// nesse caso programa não esperou escrever o caractere
// acontece que o \n é atribuido no valor do &letra, após digitar do teclado.
// para corrigir vamos digitar após o %d o \n

}

//Tamanho de uma string
int main(){
    char texto[10] = "exemplo";
    int tam = 0;

    while(texto[tam]!= '\0'){
        tam++;
    }

    printf("%d", tam);

    return 0;
}