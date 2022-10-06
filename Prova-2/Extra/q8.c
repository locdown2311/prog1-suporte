#include <stdio.h>
#include <stdlib.h>

// função para ordenar o vetor
void ordenar(int vetor[], int tam)
{
    int i, j, aux;
    for (i = 0; i < tam; i++)
    {
        for (j = i + 1; j < tam; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    // vetor de 20 inteiros
    int vetor[20];
    // ler os valores do vetor
    for (int i = 0; i < 20; i++)
    {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    // ordernar o vetor
    ordenar(vetor, 20);
    // imprimir o vetor ordenado
    printf("Vetor Ordenado: \n");
    for (int i = 0; i < 20; i++)
    {
        printf("Vetor[%d]: %d\n", i, vetor[i]);
    }


    return 0;
}
