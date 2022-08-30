#include <stdio.h>
int fatorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fatorial(n - 1);
}
int main(int argc, char const *argv[])
{
    int fat;
    int n;
    // Usando recursao
    printf("Numero desejado: ");
    scanf("%d", &n);
    printf("Fatorial (recursivo) de %d = %d", n, fatorial(n));
    // Usando loop

    printf("\nNumero desejado: ");
    scanf("%d", &n);
    int aux = n;
    for (fat = 1; n > 1; n = n - 1)
    {
        fat = fat * n;
    }
    printf("Fatorial de %d = %d", aux, fat);
    return 0;
}
