#include <stdio.h>
int validaPrimos(int n)
{
    int i;
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    int n, i, j;
    printf("Insira o seu numero aqui: \n");
    scanf("%d", &n);
    if (validaPrimos(n))
    {
        printf("Primos antecessores: ");
        for (i = n-1; i > 1; i--)
        {
            int j = 2;
            while ((j <= i / 2) && (i % j != 0))
                j++;
            if (j > i / 2)
                printf("%d ", i);
        }
    }
    return 0;
}
