#include <iostream>
#include <stdio.h>
using namespace std;
int show(int mat[3][3],int r)
{
    int menor = 100;
    int linha;
    for (int i=0; i < r; i++){
       for (int j=0; j < 3; j++){
        if (mat[i][j]<menor){
            menor = mat [i][j];
            linha = j;
            }
        }
    }
    return linha;
}
int main()
{
    int linha;
    int mat[3][3] = {{8,9,10},{20,0,12},{14,4,7}};
    linha = show(mat,3);
    cout << mat;
    cout << "O menor elemento esta na linha "<< linha+1 << endl;
    return 0;
}


