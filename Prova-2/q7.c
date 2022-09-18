#include <stdio.h>
void scanVetor(int vet[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
}
void inicializa(int vet[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        vet[i] = 0;
    }
}

void separaNumeros(int vetor[], int vetPar[], int vetImpar[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (vetor[i] % 2 == 0)
            vetPar[i] = vetor[i];
        else
            vetImpar[i] = vetor[i];
    }
}
void mostraVetor(int v[],int tam)
{
    int i;
    for ( i = 0; i < tam; i++){
        if(v[i] == 0){
            continue;
        }
        printf(" %d",v[i]);
    }
        
}
int main(int argc, char const *argv[])
{
    int tam = 20;
    int vet[tam];
    int pares[tam];
    int impares[tam];
    printf("Digite os valores: \n");
    scanVetor(vet, tam);

    inicializa(pares,tam);
    inicializa(impares,tam);

    separaNumeros(vet,pares,impares,tam);

    printf("[Pares] \n");
    mostraVetor(pares,tam);
    printf("\n");
    printf("[Impares] \n");
    mostraVetor(impares,tam);
    return 0;
}
