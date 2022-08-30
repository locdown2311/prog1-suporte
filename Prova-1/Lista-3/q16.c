#include <stdio.h>
int main(int argc, char const *argv[])
{
    float salario = 0;
    unsigned int cargo = 0;
    printf("Salario atual: ");
    scanf("%f", &salario);
    printf("Cargo: (1 = Tecnico, 2 = Gerente, 3 = Funcionarios)");
    scanf("%d", &cargo);

    if (cargo == 1)
    {
        salario *= 1.5;
        printf("\nNovo salario: %.2f", salario);
    }
    else if (cargo == 2)
    {
        salario *= 1.3;
        printf("\nNovo salario: %.2f", salario);
    }
    else if (cargo == 3)
    {
        salario *= 1.2;
        printf("\nNovo salario: %.2f", salario);
    }
    else
    {
        printf("\nCargo invalido");
    }

    return 0;
}
