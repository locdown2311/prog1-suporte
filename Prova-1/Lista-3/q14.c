#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
    {
        printf("Ano Bissexto");
    }
    else
    {
        printf("Ano normal");
    }

    return 0;
}
