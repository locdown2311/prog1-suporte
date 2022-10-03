#include <stdio.h>
#include <stdlib.h>
// struct with titulo, duração e seções
typedef struct
{
    char titulo[100];
    int duracao;
    char secoes[30];
} TFilme;
int main(int argc, char const *argv[])
{
    TFilme filme;
    printf("Digite o titulo: ");
    fgets(filme.titulo, 100, stdin);
    fflush(stdin);
    printf("Digite a duracao: ");
    scanf("%d", &filme.duracao);
    fflush(stdin);
    printf("Digite as secoes: ");
    fgets(filme.secoes, 30, stdin);
    fflush(stdin);

    printf("Titulo: %s", filme.titulo);
    printf("Duracao: %d\n", filme.duracao);
    printf("Secoes: %s\n", filme.secoes);
    return 0;
}