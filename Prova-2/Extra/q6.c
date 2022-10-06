#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    // ler armazenar e inverter os valores de um vetor
    int vetor[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    int vetorInvertido[10];
    for (int i = 0; i < 10; i++)
    {
        vetorInvertido[i] = vetor[9-i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor Invertido[%d]: %d", i, vetorInvertido[i]);
    }
    return 0;
}
