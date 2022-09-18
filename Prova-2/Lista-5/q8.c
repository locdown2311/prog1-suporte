#include <stdio.h>
void scanVetor(int vet[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
}
void ordena(int vetor[], int tam)
{
    int i, j, min, aux;

    for (i = 0; i < (tam - 1); i++)
    {
        /* O minimo é o primeiro número não ordenado ainda */
        min = i;
        for (j = i + 1; j < tam; j++)
        {
            /* Caso tenha algum numero menor ele faz a troca do minimo*/
            if (vetor[j] < vetor[min])
            {
                min = j;
            }
        }
        /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
        if (i != min)
        {
            aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;
        }
    }
    printf("\n");
    for (i = tam; i > 0; i--)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    int tam = 20;
    int vet[tam];
    printf("Digite os valores: \n");
    scanVetor(vet, tam);
    printf("\n");

    printf("[Vetor ordenado ]");
    ordena(vet,tam);
    return 0;
}
