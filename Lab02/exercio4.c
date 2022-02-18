#include<stdio.h>
#include<string.h>

int main(){
   char nomes[2][100];
   char aux[100];

    for(int i = 0; i < 2; i++){
        printf("Digite o %d* nome: ", i+1);
        gets(nomes[i]);
    }

    for(int i = 0; i < 2; i++){
        for(int j = i + 1; j < 2; j++){
            if(strcmp(nomes[i], nomes[j]) > 0){
                strcpy(aux, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], aux);
            }
        }
    }

    printf("\nNomes Ordenados:\n");
    for(int i = 0; i < 2; i++) printf("+ %s\n", nomes[i]);
    return 0;
}
