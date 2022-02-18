#include <stdio.h>
#include <stdlib.h>

int main() {
    int linha = 3, coluna = 3, num;
    int l, c, mat[linha][coluna], matSoma[coluna][linha], matMut[coluna][linha];

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
            if(l!=1){
                matSoma[l][c] = mat[l][c];
                
            }
            else{
                matSoma[l][c] = (mat[0][c]) + (mat[1][c]);
            }
        }
    }
    
    printf("\nMatriz Soma:\n");
    for(l = 0; l < coluna; l++){
        for(c = 0; c < linha; c++){
            printf("%3d ", matSoma[l][c]);
        }
        printf("\n");
    }

     for(l = 0; l < linha; l++){
        for(c = 0; c < coluna; c++){
            if(l!=1){
                matMut[l][c] = mat[l][c];
                
            }
            else{
                matMut[l][c] = (mat[0][c]) * (mat[1][c]);
            }
        }
    }

    
    printf("\nMatriz Mutiplicacao:\n");
    for(l = 0; l < coluna; l++){
        for(c = 0; c < linha; c++){
            printf("%3d ", matMut[l][c]);
        }
        printf("\n");
    }

    return 0;
}

