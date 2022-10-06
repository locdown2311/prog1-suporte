#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    // criar 2 vetores de 10 elementos
    int vetor1[10], vetor2[10];
    // ler os valores do vetor1
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }
    // ler os valores do vetor2
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }
    // criar um vetor3 que é a soma dos vetores 1 e 2
    int vetor3[10];
    for (int i = 0; i < 10; i++)
    {
        vetor3[i] = vetor1[i] + vetor2[i];
    }
    // imprimir o vetor3
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor3[%d]: %d", i, vetor3[i]);
    }
    return 0;
}
