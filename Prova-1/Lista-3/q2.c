#include <stdio.h>
int main(int argc, char const *argv[])
{
    float valorConta = 0.0;
    float consumo = 0.0;
    float precoKw = 1.0;

    printf("Digite o consume em Kw do mes : \n");
    scanf("%f", &consumo);
    if (consumo < 50)
    {
        valorConta = consumo * precoKw;
        valorConta *= 0.7;
    }
    else if (consumo > 400)
    {
        valorConta = consumo * precoKw;
        valorConta *= 1.2;
    }
    else
    {
        valorConta = consumo * precoKw;
    }
    printf("Preco final (RS): %.2f por %.2f KW", valorConta, consumo);

    return 0;
}
