#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero;
    printf("Digite o numero desejado: \n");
    scanf("%d", &numero);

    if (numero % 2 == 0 && numero % 3 == 0)
    {
        printf("Divisivel por 2 e 3 simultaneamente");
    }
    else
    {
        printf("Nao divisivel simultaneamente");
    }

    return 0;
}
