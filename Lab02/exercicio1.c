#include <stdio.h>
#include <stdlib.h>

int main() {
    int linha = 3, coluna = 3, menor = 100;
    int l, c, linhaN, mat[linha][coluna], matSoma[coluna][linha], matMut[coluna][linha];
    srand(time(NULL));

    for(l = 0; l < linha; l++){
        for(c = 0; c < coluna; c++){
            mat[l][c] = rand () % 10;
        }
    }

    printf("\nMatriz:\n");
    for(l = 0; l < linha; l++){
        for(c = 0; c < coluna; c++){
            printf("%3d ", mat[l][c]);
        }
        printf("\n");
    }
    for (int l=0; l < 3; l++){
       for (int c=0; c < 3; c++){
        if (mat[l][c]<menor){
            menor = mat [l][c];
            linhaN = l;
            }
        }
    }
    printf("O menor elemento esta na linha: ");
    printf("%d", linhaN + 1 );
    printf("\n");
    return 0;
}


