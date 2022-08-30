#include <stdio.h>
int main(int argc, char const *argv[])
{
    float precoAlcool;
    float precoGasolina;

    printf("Preco do alcool: \n");
    scanf("%f",&precoAlcool);
    printf("Preco da gasolina: \n");
    scanf("%f",&precoGasolina);

    if ((precoAlcool / precoGasolina) < 0.7)
    {
        printf("Alcool mais vantajoso");
    }
    else
    {
        printf("Gasolina mais vantajoso");
    }
    return 0;
}
