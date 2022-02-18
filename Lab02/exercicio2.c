#include <stdio.h>
#include <stdlib.h>

int main() {
    /*2. Escreva um programa que leia 3 notas de um aluno e a média das notas dos exercícios realizados por ele.
    Calcular a média de aproveitamento, usando a fórmula : MA = (N1 + N2 * 2 + N3 * 3 + ME) / 7.
    A partir da média, informar o conceito de acordo com a tabela :*/

    char result[] = { 'A', 'B', 'C', 'D', 'E' };
    float notas[4] = { 0 };

    for (int i = 0; i < 4; i++) {
        printf("Digite uma nota para exercicio %d do aluno: ", i + 1);
        scanf_s("%f", &notas[i]);
        while (notas[i] < 0 || notas[i] > 10) {
            printf("- Digite uma nota VALIDA para exercicio %d do aluno: ", i + 1);
            scanf_s("%f", &notas[i]);
        }
    }

    float MA = (notas[0] + notas[1] * 2 + notas[2] * 3 + notas[3]) / 7;
    printf("MA = (%f + %f * 2 + %f * 3 + %f)/7 = %f -> ", notas[0], notas[1], notas[2], notas[3], MA);

    if (MA >= 9)  printf("A");
    else if (MA >= 7.5 && MA < 9)  printf("B");
    else if (MA >= 6 && MA < 7.5)  printf("C");
    else if (MA >= 4 && MA < 6)  printf("D");
    else  printf("E");
    return 0;
}
