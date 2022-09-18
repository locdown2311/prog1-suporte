#include <stdio.h>

void alternaVet(int v[], int v1[], int v2[]){
    int i;
    for (i = 0; i < 5; i++)
    {
        v[i*2] = v1[i];
    }
    for (i = 0; i < 5; i++)
    {
        v[i*2+1] = v2[i];
    }
}
void mostraVetor(int v[])
{
    int i;
    for ( i = 0; i < 10; i++)
        printf("O numero posicao [%d] e %d\n", i, v[i]);
}
int main(int argc, char const *argv[])
{
    int v[10];
    int v1[5];
    int v2[5];
    int i;

    printf("Digite os elementos do primeiro vetor: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v1[i]);
    }
    printf("\nDigite os elementos do segundo vetor: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v2[i]);
    }
    alternaVet(v,v1,v2);
    mostraVetor(v);    
    return 0;
}
