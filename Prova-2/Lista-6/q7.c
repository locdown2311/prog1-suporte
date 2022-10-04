#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct
{
    char nome[100];
    float nota;
    float frequencia;
} TDisciplina;
typedef struct
{
    int matricula;
    char nome[100];
    TDisciplina disciplinas[5];
    
} TAluno;

int main(int argc, char const *argv[])
{
    // Menu com as opções:
    // 1. Cadastrar aluno, incrementar o contador de cadastrados e cadastrar 5 disciplinas
    // 2. Pesquisar aluno por matricula e exibir nome e disciplinas
    // 3. Pesquisar aluno por nome e exibir nome e disciplinas
    // 4. Exibir todos os alunos cadastrados
    // 5. Exibir disciplinas por aluno
    // 6. Sair
    TAluno aluno[20];
    int cadastrados = 0;
    int i = 0;
    int opcao;
    do
    {
        printf("1. Cadastrar aluno \n");
        printf("2. Pesquisar aluno por matricula \n");
        printf("3. Pesquisar aluno por nome \n");
        printf("4. Exibir todos os alunos cadastrados \n");
        printf("5. Exibir disciplinas por aluno \n");
        printf("6. Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite a matricula do aluno: ");
            scanf("%d", &aluno[cadastrados].matricula);
            fflush(stdin);
            printf("Digite o nome do aluno: ");
            fgets(aluno[cadastrados].nome, 100, stdin);
            for (i = 0; i < 5; i++)
            {
                printf("Digite o nome da disciplina [%d]: ",i+1);
                fgets(aluno[cadastrados].disciplinas[i].nome, 100, stdin);
                printf("Digite a nota da disciplina [%d]: ");
                scanf("%f", &aluno[cadastrados].disciplinas[i].nota);
                fflush(stdin);
                printf("Digite a frequencia da disciplina: [%d] ");
                scanf("%f", &aluno[cadastrados].disciplinas[i].frequencia);
                fflush(stdin);
            }
            cadastrados++;
            break;
        case 2:;
            int matricula;
            printf("Digite a matricula do aluno: ");
            scanf("%d", &matricula);
            fflush(stdin);
            for (i = 0; i < cadastrados; i++)
            {
                if (aluno[i].matricula == matricula)
                {
                    printf("Matricula: %d\n", aluno[i].matricula);
                    printf("Nome: %s", aluno[i].nome);
                    for (int j = 0; j < 5; j++)
                    {
                        printf("Disciplina: %s", aluno[i].disciplinas[j].nome);
                        printf("Nota: %.2f", aluno[i].disciplinas[j].nota);
                        printf("Frequencia: %.2f", aluno[i].disciplinas[j].frequencia);
                    }
                }
            }
            break;
        case 3:;
            char nome[100];
            printf("Digite o nome do aluno: ");
            fgets(nome, 100, stdin);
            fflush(stdin);
            for (i = 0; i < cadastrados; i++)
            {
                if (strcmp(aluno[i].nome, nome) == 0)
                {
                    printf("Matricula: %d\n", aluno[i].matricula);
                    printf("Nome: %s", aluno[i].nome);
                    for (int j = 0; j < 5; j++)
                    {
                        printf("Disciplina: %s", aluno[i].disciplinas[j].nome);
                        printf("Nota: %.2f", aluno[i].disciplinas[j].nota);
                        printf("Frequencia: %.2f", aluno[i].disciplinas[j].frequencia);
                    }
                }
            }
            break;
        case 4:
            for (i = 0; i < cadastrados; i++)
            {
                printf("Matricula: %d\n", aluno[i].matricula);
                printf("Nome: %s", aluno[i].nome);
                for (int j = 0; j < 5; j++)
                {
                    printf("Disciplina: %s", aluno[i].disciplinas[j].nome);
                    printf("Nota: %.2f", aluno[i].disciplinas[j].nota);
                    printf("Frequencia: %.2f", aluno[i].disciplinas[j].frequencia);
                }
            }
            break;
        case 5:;
            int matricula2;
            printf("Digite a matricula do aluno: ");
            scanf("%d", &matricula2);
            fflush(stdin);
            for (i = 0; i < cadastrados; i++)
            {
                if (aluno[i].matricula == matricula2)
                {
                    printf("Matricula: %d\n", aluno[i].matricula);
                    printf("Nome: %s", aluno[i].nome);
                    for (int j = 0; j < 5; j++)
                    {
                        printf("Disciplina: %s\n", aluno[i].disciplinas[j].nome);
                        printf("Nota: %.2f\n", aluno[i].disciplinas[j].nota);
                        printf("Frequencia: %.2f\n", aluno[i].disciplinas[j].frequencia);
                    }
                }
            }
            break;
        case 6:
            printf("Saindo do programa...\n");
            break;
        default:    
            printf("Opcao invalida!\n");
            break;
        }
    } while (opcao != 6);
    return 0;
}