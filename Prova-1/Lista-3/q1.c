#include <stdio.h>
int main()
{
    int valor = 0;
    printf("Digite o valor desejado: \n");
    scanf("%d", &valor);

    if (valor > 0)
    {
        printf("Positivo");
    }
    else if (valor == 0)
    {
        printf("Nulo");
    }
    else
    {
        printf("Negativo");
    }
}