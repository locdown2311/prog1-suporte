#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    // vetor de 20 elementos
    int vetor[20];
    // ler os valores do vetor
    for (int i = 0; i < 20; i++)
    {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    // pesquisar um valor no vetor e imprimir o numero de vezes que ele aparece	
    int valor;
    printf("Valor: ");
    scanf("%d", &valor);
    int cont = 0;
    for (int i = 0; i < 20; i++)
    {
        if (vetor[i] == valor)
        {
            cont++;
        }
    }
    printf("O valor %d aparece %d vezes no vetor", valor, cont);
    return 0;
}
