#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float delta;
    int a, b, c;
    float x1, x2;

    printf("Digite o coeficiente A: \n");
    scanf("%d", &a);
    printf("Digite o coeficiente B: \n");
    scanf("%d", &b);
    printf("Digite o coeficiente C: \n");
    scanf("%d", &c);

    delta = (b ^ 2) - (4 * a * c);

    if (delta < 0)
    {
        printf("Raizes reais inexistentes");
    }
    else
    {
        x1 = (-b + sqrt(delta)) / 2 * a;
        x2 = (-b - sqrt(delta)) / 2 * a;
        printf("Valor de X1: %.2f. \nValor de X2: %.2f", x1, x2);
    }

    return 0;
}
