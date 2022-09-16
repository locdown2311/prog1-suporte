#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    int tam;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &tam);

    printf("Diagonal principal: \n");
    for (i = 0; i < tam; i++)
    {
        printf("\n");
        for (j = 0; j < tam; j++)
        {
            if (i == j)
                printf("%d ", j);
        }
    }

    return 0;
}
