#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int matricula;
    char nome[100];
    float nota;
    float frequencia;
} TAluno;

int main(int argc, char const *argv[])
{
    TAluno aluno[20];
    int cadastrados = 0;
    int i = 0;
    // Menu com as opções:
    // 1. Cadastrar aluno e incrementar o contador de cadastrados
    // 2. Pesquisar aluno por matricula e exibir os dados
    // 3. Pesquisar aluno por nome e exibir os dados
    // 4. Exibir alunos aprovados (nota >=6 e frequencia >=0.75)
    // 5. Exibir alunos reprovados (nota <6 ou frequencia <0.75)
    // 6. Sair
    int opcao;
    do
    {
        printf("1. Cadastrar aluno \n");
        printf("2. Pesquisar aluno por matricula \n");
        printf("3. Pesquisar aluno por nome \n");
        printf("4. Exibir alunos aprovados (nota >=6 e frequencia >=0.75)\n");
        printf("5. Exibir alunos reprovados (nota <6 ou frequencia <0.75)\n");
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
            printf("Digite a nota do aluno: ");
            scanf("%f", &aluno[cadastrados].nota);
            fflush(stdin);
            printf("Digite a frequencia do aluno: ");
            scanf("%f", &aluno[cadastrados].frequencia);
            fflush(stdin);
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
                    printf("Nota: %.2f\n", aluno[i].nota);
                    printf("Frequencia: %.2f\n", aluno[i].frequencia);
                }
            }
            break;
        case 3:;
            char nome[100];
            printf("Digite o nome do aluno: ");
            fgets(nome, 100, stdin);
            for (i = 0; i < cadastrados; i++)
            {
                if (strcmp(aluno[i].nome, nome) == 0)
                {
                    printf("Matricula: %d\n", aluno[i].matricula);
                    printf("Nome: %s", aluno[i].nome);
                    printf("Nota: %.2f\n", aluno[i].nota);
                    printf("Frequencia: %.2f\n", aluno[i].frequencia);
                }
            }
            break;
        case 4:
            printf("====================================\n");
            printf("Alunos aprovados:\n");

            for (i = 0; i < cadastrados; i++)
            {
                if (aluno[i].nota >= 6 && aluno[i].frequencia >= 0.75)
                {
                    printf("Matricula: %d\n", aluno[i].matricula);
                    printf("Nome: %s", aluno[i].nome);
                    printf("Nota: %.2f\n", aluno[i].nota);
                    printf("Frequencia: %.2f\n", aluno[i].frequencia);
                }
            }
            break;
        case 5:
            printf("====================================\n");
            printf("Alunos reprovados\n");

            for (i = 0; i < cadastrados; i++)
            {
                if (aluno[i].nota < 6 || aluno[i].frequencia < 0.75)
                {
                    printf("Matricula: %d\n", aluno[i].matricula);
                    printf("Nome: %s", aluno[i].nome);
                    printf("Nota: %.2f\n", aluno[i].nota);
                    printf("Frequencia: %.2f\n", aluno[i].frequencia);
                }
            }
            break;
        case 6:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (opcao != 6);

    return 0;
}