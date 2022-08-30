#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2, resultado, resto;
    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("\nDigite outro valor: ");
    scanf("%d", &num2);
    resultado = num1 / num2;
    printf("Resultado:  %d \n", resultado);

    resto = num1 - (resultado * num2);
    printf("Resto:  %d \n", resto);
    return 0;
}
