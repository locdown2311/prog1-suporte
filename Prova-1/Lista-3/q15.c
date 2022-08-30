#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n1, n2;
    printf("Numero 1:");
    printf("\nNumero 2:");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n1 % n2 == 0)
    {
        printf("Divisivel");
    }
    else
    {
        printf("Nao divisivel");
    }

    return 0;
}
