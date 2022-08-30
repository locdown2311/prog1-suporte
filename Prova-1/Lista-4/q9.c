#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, i;
    printf("Digite o numero a ser tabelado: ");
    scanf("%d", &num);

    while (num > 0)
    {
        printf("Taboada do %d\n",num);
        for (i = 0; i <= 10; i++)
        {
            printf("%d X %d = %d \n", num, i, num * i);
        }
        printf("Digite o numero a ser tabelado: ");
        scanf("%d", &num);
    }

    return 0;
}
