#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*3.Faça o programa que apresenta a seguinte saída, perguntando ao usuário o número máximo(no exemplo, 9).
    Este número deve ser sempre ímpar.

    1 2 3 4 5 6 7 8 9
      2 3 4 5 6 7 8
        3 4 5 6 7
          4 5 6
            5
     */

    int num = 2;
  
    while (num % 2 == 0) {
        printf("Informe um numero maximo IMPAR: ");
        scanf("%d", &num);
    }
    
    for (int i = 1; i <= num - i+1; i++) {
        for (int j = 1; j <= num; j++)
            (j - i >= 0 && j <= num - i+1) ? printf(" %d ", j) : printf("   ");
        printf("\n");
    }
}

