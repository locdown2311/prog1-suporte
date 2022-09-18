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
int main(int argc, char const *argv[])
{
    int A[] = {1, 3, 4, 5};
    int B[] = {1, 2, 3, 6};
    int U[8] = {0,0,0,0,0,0,0,0};
    int I[8] = {0,0,0,0,0,0,0,0};
    uniao(U, A, B, 4, 4);
    intersecao(I, A, B, 4, 4);
    printf("[Uniao]\n");
    mostraVetor(U, 8);
    printf("\n[Intersecao]\n");
    mostraVetor(I, 8);

    return 0;
}
