#include <stdio.h>
int main(int argc, char const *argv[])
{
    int limInf;
    int limSup;
    int i, multiplos;
    int contMultiplos = 0;

    printf("Digite o limite inferior: ");
    scanf("%d", &limInf);
    printf("\nDigite o limite superior: ");
    scanf("%d", &limSup);
    printf("\nDigite o numero de multiplos: ");
    scanf("%d", &multiplos);

    for (i = limInf; i <= limSup && contMultiplos < multiplos; i += limInf)
    {

        printf("%d ", i);
        contMultiplos++;
    }

    return 0;
}
