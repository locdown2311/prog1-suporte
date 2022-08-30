#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, cont = 0;

    int zeros = 0;
    int negativos = 0;
    int positivos = 0;

    while (cont < 5)
    {
        printf("\nDigite o numero desejado: ");
        scanf("%d", &num);

        if (num == 0)
        {
            zeros++;
        }
        else if (num > 0)
        {
            positivos++;
        }
        else
        {
            negativos++;
        }
        cont++;
    }
    printf("Zeros : %d, Positivos: %d, Negativos: %d", zeros, positivos, negativos);

    return 0;
}
