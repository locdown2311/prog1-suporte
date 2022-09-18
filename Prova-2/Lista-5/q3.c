#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    float vet1[10];
    float vet2[10];
    float resultado[10];

    printf("Digite os numeros para o primeiro vetor: ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%f",&vet1[i]);
    }
    printf("\nDigite os numeros para o segundo vetor: ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%f",&vet2[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        resultado[i] = vet1[i]+vet2[i];
    }

    printf("Resultado: [");
    for ( i = 0; i < 10; i++)
    {
        printf("%.2f ",resultado[i]);
    }
        printf("]");


    return 0;
}
