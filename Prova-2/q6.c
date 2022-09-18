#include <stdio.h>
void scanVetor(int vet[],int tam){
    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d",&vet[i]);
    }
    
}
int pesquisa(int vet[],int tam,int busca){
    int i;
    int contador = 0;
    for (i = 0; i < tam; i++)
    {
        if(vet[i] == busca){
            contador++;
        }
    }
    return contador;
}
int main(int argc, char const *argv[])
{
    int tam = 20;
    int vet[tam];
    printf("Digite os valores: \n");
    scanVetor(vet,tam);

    int num;
    printf("\nDigite o valor a ser pesquisado: ");
    scanf("%d",&num);
    int busca = 0;
    busca = pesquisa(vet,tam,num);
    printf("O numero [%d] foi encontrado [%d] vezes",num,busca);
    return 0;
}
