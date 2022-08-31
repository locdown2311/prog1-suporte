#include <stdio.h>
int main(int argc, char const *argv[])
{
    int time, regiao,invalido = 0;
    int cAmerica = 0, cAtletico = 0, cCruzeiro = 0;
    int cMetropole = 0, cInterior = 0;

    while ()
    {
        /* code */
    }
    
    printf("Time que voce torce: \n[1]America \n[2]Atletico \n[3]Cruzeiro ");
    scanf("%d",&time);

    printf("\nRegiao de moradia: \n[1]Belo Horizonte e metropolitana \n[2]Interior ");
    scanf("%d",&regiao);

    switch (time)
    {
    case 1:
        cAmerica++;
        break;
    case 2:
        cAtletico++;
        break;
    case 3:
        cCruzeiro++;
        break;
    
    default:
        invalido++;
        printf("Opcao invalida");
        break;
    }
    switch (regiao)
    {
    case 1:
        cMetropole++;
        break;
    case 2:
        cInterior++;
        break;
    
    default:
        invalido++;
        printf("Opcao invalida");
        break;
    }
    return 0;
}
