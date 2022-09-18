#include <stdio.h>
#include <stdlib.h>
double detLaplace(int n, double a[n][n]){
    if(n == 1){
        //Caso base: matriz 1x1
        return a[0][0];
    }else{
        double det = 0;
        int i, row, col, j_aux, i_aux;
        
        //Escolhe a primeira linha para calcular os cofatores
        for(i = 0; i < n; i++){
            //ignora os zeros (zero vezes qualquer número é igual zero)
            if (a[0][i] != 0) {
                double aux[n - 1][n - 1];
                i_aux = 0;
                j_aux = 0;
                //Gera as matrizes para calcular os cofatores
                for(row = 1; row < n; row++){
                    for(col = 0; col < n; col++){
                        if(col != i){
                            aux[i_aux][j_aux] = a[row][col];
                            j_aux++;
                        }
                    }
                    i_aux++;
                    j_aux = 0;
                }
                double factor = (i % 2 == 0)? a[0][i] : -a[0][i];
                det = det + factor * detLaplace(n - 1, aux);
            }
        }
        return det;
    }
}
void subtrair(double subtr[4][4], double matrizA[4][4], double matrizB[4][4]){
    int i, j;
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j)
        {
            subtr[i][j] = matrizA[i][j] - matrizB[i][j];
        }

    printf("\nSubtracao das matrizes: \n");
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j)
        {
            printf("%d   ", subtr[i][j]);
            if (j == 4 - 1)
            {
                printf("\n\n");
            }
        }
}
void adicao(double adicao[4][4], double matrizA[4][4], double matrizB[4][4])
{
    int i, j;
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j)
        {
            adicao[i][j] = matrizA[i][j] + matrizB[i][j];
        }

    printf("\nSoma das matrizes: \n");
    for (i = 0; i < 4; ++i)
        for (j = 0; j < 4; ++j)
        {
            printf("%d   ", adicao[i][j]);
            if (j == 4 - 1)
            {
                printf("\n\n");
            }
        }
}
int main(int argc, char const *argv[])
{
    double mat[4][4] = {
        {1, 2, 3, 9},
        {4, 5, 6, 8},
        {6, 7, 8, 7},
        {5, 4, 3, 2}};
    double mat2[4][4] = {
        {15, 2, 3, 0},
        {4, 5, 6, 0},
        {6, 7, 8, 1},
        {5, 4, 3, 58}};

    double mAdicao[4][4];
    double mSubtr[4][4];
    int op = 0;
    do
    {
        printf("[1] Soma das matrizes");
        printf("\n[2] Subtrair matrizes");
        printf("\n[3] Multiplicar as matrizes");
        printf("\n[4] Diagonal principal");
        printf("\n[5] Determinante da matriz");
        printf("\n[6] Sair\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            adicao(mAdicao, mat, mat2);
            break;
        case 2:
            subtrair(mSubtr, mat, mat2);
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            printf("Determinante [%f] da matriz A e determinante [%f] da matriz B\n",detLaplace(4,mat),detLaplace(4,mat2));
            break;

        default:
            printf("\nOpcao invalida\n");
            break;
        }
    } while (op != 6);

    return 0;
}
