/**
 * fgets é mais seguro do que scanf - especifica o tanho da string a ser lida
 * se o usuario escrever uma string maior, o scanf pode sobreescrever em posições invalidas na memória
 * existe um ataque chamado BUFFER OVERFLOW que explora justamente essa questão
*/

#include <stdio.h>

int main(){
    // para ler um scring com scanf(), também usamos %s.
    // o comando scanf() lê até o primeiro ESPAÇO, \n, \t. ....... isso causa limitaçao.
    char vet[80];
    int idade;

    scanf("%s", vet); // perceba que não temos que passar o endereço vet==&vet[0]
    scanf("%d", &idade);

    printf("digitado: %s (%d)\n", vet, idade);

    // para ultilizar espaço usamos a função fgets()

    // char texto[80];
    // fgets(texto, 80, stdin);
    // 1 - nome da variavel
    // 2- tamanho da string
    // 3- de qual arquivo deve-se ler
    // lê até o primeiro \n

    char t[100];

    printf("escreva seu nome: ");
    fgets(t, 100, stdin); // stdin seria do teclado // "humberto machado\n\0"

    printf("nome= %s", t);

    //existe forma de ler string usando scanf:
    //scanf("%[^\n", texto); //se lê da entrada até encontrar o \n    // enquanto os caracters não fazer parte do conjunto \n

return 0;
}