#include <stdio.h>
void scanVetor(int vet[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
}
void mostraVetor(int v[],int tam)
{
    int i;
    for ( i = 0; i < tam; i++){
        printf(" %d",v[i]);
    }
        
}
void ordena(int vetor[], int tamanho){
	int aux, i, j;
	for(j=tamanho-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
                    vetor[i]=vetor[i+1];
                    vetor[i+1]=aux;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int tam = 20;
    int vet[tam];
    printf("Digite os valores: \n");
    scanVetor(vet, tam);
    printf("\n");

    printf("[Vetor ordenado ]");
    ordena(vet,tam);
    mostraVetor(vet,tam);
    return 0;
}
