#include <stdio.h>
#include <string.h>

/*7. Faça um programa que crie um vetor de pessoas. Os dados de uma pessoa devem ser armazenados em um variavel do tipo struct.
     O programa deve permitir que o usuário digite o nome de 3 pessoas e a seguir imprimi os dados de todas as pessoas.
     A struct deve armazenar os dados de idade, peso e altura.

*/

struct Person {
  char name[50];
  int age;
  float weight;
  float height;
};

int main() {

    struct Person arr[3];
    int size = sizeof(arr[0])/sizeof(arr);
    
    for(int i = 0; i < 3 ; i++){
        printf("Digite o Nome da %d* pessoa: ", i+1);
        gets (arr[i].name);
    }

    for(int i = 0; i < 3 ; i++){
        printf("\n");
        printf("Digite a idade de %s: ", arr[i].name);
        scanf("%d",&arr[i].age);

        printf("Digite o Peso de %s: ", arr[i].name);
        scanf("%f",&arr[i].weight);

        printf("Digite a Altura de %s: ", arr[i].name);
        scanf("%f",&arr[i].height);
    }

    printf("\nInformacoes das Pessoas: \n");
    for(int i = 0; i < 3;i++)
        printf("\nNome: \t%s \nIdade: \t%d \nPeso: \t%f \nAltura: %f \n",arr[i].name,arr[i].age, arr[i].weight, arr[i].height);

  return 0;
}
