#include <stdio.h>
int main(int argc, char const *argv[])
{
    int nota;
    int frequencia;

    printf("Digite a nota alcancada: \n");
    scanf("%d", &nota);
    printf("Digite a frequencia alcancada: \n");
    scanf("%d", &frequencia);

    if (nota >= 6 && frequencia >= 75)
    {
        printf("Aprovado");
    }
    else if ((nota >= 4 && nota < 6) && frequencia >= 75)
    {
        printf("Exame especial");
    }
    else
    {
        printf("Reprovado");
    }
    return 0;
}
