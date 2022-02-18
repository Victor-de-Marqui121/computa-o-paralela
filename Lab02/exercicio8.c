#include <stdio.h>
#include <stdlib.h>

int main() {
    int linha = 3, coluna = 3, num;
    int l, c, mat[linha][coluna], trans[coluna][linha];

    srand(time(NULL));

    for(l = 0; l < linha; l++){
        for(c = 0; c < coluna; c++){
            mat[l][c] = rand () % 10;
        }
    }

    printf("\nMatriz original:\n");
    for(l = 0; l < linha; l++){
        for(c = 0; c < coluna; c++){
            printf("%3d ", mat[l][c]);
        }
        printf("\n");
    }

    for(l = 0; l < linha; l++){
        for(c = 0; c < coluna; c++){
            trans[c][l] = mat[l][c];
        }
    }

    printf("\nMatriz transposta:\n");
    for(l = 0; l < coluna; l++){
        for(c = 0; c < linha; c++){
            printf("%3d ", trans[l][c]);
        }
        printf("\n");
    }

    return 0;
}
