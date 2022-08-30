#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int velCapturada, velPermitida;
    printf("Digite a velocidade capturada: ");

    scanf("%d", &velCapturada);
    printf("Digite a velocidade permitida: ");

    scanf("%d", &velPermitida);

    int velMLeve = velCapturada + 10;
    int velMGrave = velCapturada + 30;

    if (abs(velCapturada - velMLeve) <= 10 && abs(velCapturada - velMLeve)  > 0 )
    {
        printf("100 reais de multa");
    }
    else if (velCapturada > velMLeve && velCapturada < velMGrave)
    {
        printf("200 reais de multa");
    }
    else if (velCapturada >= velMGrave)
    {
        printf("500 reais de multa");
    }
    else
    {
        printf("Sem multa");
    }

    return 0;
}
