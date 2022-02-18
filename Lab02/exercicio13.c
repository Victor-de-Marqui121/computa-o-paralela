#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
    /*13. Faça um rotina que remova um caracter de uma string do tipo char Str[100], dada a posição do caracter.*/
    char str[100] = "";
    int pos;

    printf("Digite uma palavra: ");
    scanf("%s", &str);

    printf("Digite a posicao para a letra ser removida: ");
    scanf(" %d", &pos);

    if ((pos) <= strlen(str)) strcpy(&str[pos], &str[1 + pos]);

    printf("\nNova String: %s", str);
    return 0;
}
