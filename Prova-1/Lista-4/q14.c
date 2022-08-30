#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;

    printf("Digite o numero desejado: ");
    scanf("%d", &num);
    printf("\nDivisores: ");

    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
