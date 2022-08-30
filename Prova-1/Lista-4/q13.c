#include <stdio.h>

int main(int argc, char const *argv[])
{
    int fat;
    int n;
    // Usando loop
    while (n >= 0)
    {
        printf("\nNumero desejado: ");
        scanf("%d", &n);
        int aux = n;
        for (fat = 1; n > 1; n = n - 1)
        {
            fat = fat * n;
        }
        if(n>= 0)
            printf("Fatorial de %d = %d", aux, fat);
    }

    return 0;
}
