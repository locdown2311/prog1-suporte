#include <stdio.h>
#include <stdlib.h>
// struct with nome, telefone, aniversario, cidade e estado
typedef struct
{
    char nome[100];
    char telefone[8];
    char aniversario[11];
    char cidade[50];
    char estado[3];
} TDados;
int main(int argc, char const *argv[])
{
    TDados dados;
    printf("Digite o nome: ");
    fgets(dados.nome, 100, stdin);
    fflush(stdin);
    printf("Digite o telefone: ");
    fgets(dados.telefone, 8, stdin);
    fflush(stdin);
    printf("Digite o aniversario: ");
    fgets(dados.aniversario, 11, stdin);
    fflush(stdin);
    printf("Digite a cidade: ");
    fgets(dados.cidade, 50, stdin);
    fflush(stdin);
    printf("Digite o estado: ");
    fgets(dados.estado, 3, stdin);
    fflush(stdin);

    printf("Nome: %s", dados.nome);
    printf("Telefone: %s\n", dados.telefone);
    printf("Aniversario: %s\n", dados.aniversario);
    printf("Cidade: %s\n", dados.cidade);
    printf("Estado: %s\n", dados.estado);
    return 0;
}
