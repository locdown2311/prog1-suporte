#include <stdio.h>
int main(int argc, char const *argv[])
{
    //Falta verificação de números iguais
    int i = 0;
    int inicio = 1;
    int menor;
    int maior;
    int numero = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero: \n");
        scanf("%d", &numero);
        if (inicio)
        {
            maior = numero;
            menor = numero;
        }
        inicio = 0;
        if (numero > maior)
            maior = numero;
        if (numero < menor)
            menor = numero;
    }
    printf("Menor numero : %d, Maior numero %d", menor, maior);

    return 0;
}
