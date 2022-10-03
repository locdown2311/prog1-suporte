#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nome[100];
    char horarioInicial[5];
    char horarioFinal[5];
    char especialidade[100];
} TMedico;
int main(int argc, char const *argv[])
{
    TMedico medico;
    printf("Digite a matricula: ");
    scanf("%d", &medico.matricula);
    fflush(stdin);
    printf("Digite o nome: ");
    fgets(medico.nome, 100, stdin);
    fflush(stdin);
    printf("Digite o horario inicial: ");
    fgets(medico.horarioInicial, 5, stdin);
    fflush(stdin);
    printf("Digite o horario final: ");
    fgets(medico.horarioFinal, 5, stdin);
    fflush(stdin);
    printf("Digite a especialidade: ");
    fgets(medico.especialidade, 100, stdin);
    fflush(stdin);

    printf("Matricula: %d\n", medico.matricula);
    printf("Nome: %s\n", medico.nome);
    printf("Horario inicial: %s\n", medico.horarioInicial);
    printf("Horario final: %s\n", medico.horarioFinal);
    printf("Especialidade: %s\n", medico.especialidade);
    return 0;
}