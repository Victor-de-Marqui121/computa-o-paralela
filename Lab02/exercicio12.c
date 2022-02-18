#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
    /*12. Faça uma função que retorne a posição de um dado caracter dentro de uma string.*/
    char str[100] = "";
    char c;

    printf("Digite uma palavra: ");
    scanf("%s", &str);

    printf("Digite uma letra para buscar: ");
    scanf(" %c", &c);

    printf("O nome armazenado foi: %s ", str, strlen(str));

    for (int i = 0; i < strlen(str) + 1; i++)
        (str[i] == c) ? printf("\n+ Caractere %c encontrado na posicao -> %d ", c, i) : printf("");

    return 0;
}

