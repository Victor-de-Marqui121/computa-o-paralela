#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
    /*14. Faça uma rotina que insira um caracter em uma string do tipo char Str[100], dada a posição do caracter.*/
    char str[100] = "";
    int pos;
    char letter;

    printf("Digite uma palavra: ");
    scanf("%s",&str);

    printf("Digite a posicao para ser inserida uma letra: ");
    scanf(" %d", &pos);

    printf("Digite a letra para ser inserida: ");
    scanf(" %c", &letter);

    if(strlen(str)>=pos) for(int i=strlen(str)+2;i>=pos;i--) str[i+1]=str[i];
    str[pos]=letter;

	printf("\nNova String: %s", str);
    return 0;
}
