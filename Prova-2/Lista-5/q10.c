#include <stdio.h>
void mostraVetor(int v[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        printf(" %d", v[i]);
    }
}
void intersecao(int interse[], int array1[], int array2[], int m, int n)
{
    int count = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array1[i] == array2[j])
            {
                count = count + 1;
                interse[count] = array1[i];
            }
        }
    }
}
void uniao(int u[], int a1[], int a2[], int m, int n)
{
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < n && j < m;)
    {
        if (a1[i] < a2[j])
        {
            u[k] = a1[i];
            i++;
            k++;
        }
        else if (a1[i] > a2[j])
        {
            u[k] = a2[j];
            j++;
            k++;
        }
        else
        {
            u[k] = a1[i];
            i++;
            j++;
            k++;
        }
    }
    if (i < n)
    {
        for (; i < n; ++i)
        {
            u[k] = a1[i];
            k++;
        }
    }
    else if (j < m)
    {
        for (; j < m; ++j)
        {
            u[k] = a2[j];
            k++;
        }
    }
}
void scanVetor(int vet[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
}
int main(int argc, char const *argv[])
{
    int A[5];
    int B[5];
    printf("Valores para o vetor A: \n");
    scanVetor(A, 5);
    printf("\nValores para o vetor B: \n");
    scanVetor(B, 5);

    int U[10] = {0, 0, 0, 0, 0, 0, 0, 0,0,0};
    int I[10] = {0, 0, 0, 0, 0, 0, 0, 0,0,0};
    uniao(U, A, B, 5, 5);
    intersecao(I, A, B, 5, 5);
    printf("[Uniao]\n");
    mostraVetor(U, 10);
    printf("\n[Intersecao]\n");
    mostraVetor(I, 10);

    return 0;
}
