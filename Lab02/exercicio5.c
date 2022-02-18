#include<stdio.h>
#include<string.h>
int main(){
    /*  5. Crie um programa  capaz de multiplicar uma linha de uma matriz de inteiros por um dado número. Faça o mesmo para uma coluna. A matriz deve ser lida de teclado. */

    int linha, coluna, opc, num, mul ;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linha);

    printf("Digite o numero de colunas: ");
    scanf("%d", &coluna);

    printf("\nMatriz:\n");
    int mat[linha][coluna] ;

    printf("\n");

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("matriz[%d][%d]: ", i,j);
            scanf("%d", &mat[i][j]);

        }
        printf("\n");
      }

    for (int i = 0; i < linha; i++) printf("   %d ", i);
    printf("\n");
    for(int i = 0; i < linha; i++){
        printf("%d", i);
        for(int j = 0; j < coluna; j++){
            printf("| %d |", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nO que quer multiplicar? ");
    printf("[1. linha] [2. coluna]: ");
    scanf("%d", &opc);

    while(opc<1 && opc>2) {
        printf("Escolha uma opcao valida: ");
        scanf("%d", &opc);
    }

    (opc == 1) ? (printf("Informe a linha a ser multiplicada: ")):(printf("Informe a coluna a ser multiplicada: "));
    scanf("%d", &mul);

    printf("Digite um numero para multiplicar a matriz: ");
    scanf("%d", &num);

    int j = 0;
    for(int i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if (opc == 1 && i == mul) mat[i][j] *= num;
            if (opc == 2 && j == mul) mat[i][j] *= num;
            printf("| %d |", mat[i][j]);
        }
        printf("\n");
      }
      return 0;
}
