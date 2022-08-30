#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int invalida = 0;
    int numero;
    printf("Digite o numero desejado: ");
    scanf("%d", &numero);

    for (i = 2; i < numero / 2; i++)
    {
        if (numero % i == 0)
            invalida = 1;
    }
    if (!invalida)
    {
        printf("\nNumero primo");
    }
    else
        printf("\nNao primo");

    return 0;
}
