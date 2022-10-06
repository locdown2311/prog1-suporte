#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// criar struct com código, nome, frequencia, nota e ativo
typedef struct {
    char codigo[7];
    char nome[30];
    float frequencia;
    float nota;
    int ativo;
}TMatriculaDisciplina;
// criar struct com matricula, nome e vetor de TMatriculaDisciplina
typedef struct {
    char matricula[10];
    char nome[60];
    TMatriculaDisciplina disciplinas[5];
}TAluno;

int main(int argc, char const *argv[])
{
    TAluno aluno[2];
    int i,j;
    // ler os dados dos alunos
    for ( i = 0; i < 2; i++)
    {
        printf("Aluno %d\n", i+1);
        printf("Matricula: ");
        scanf("%s", aluno[i].matricula);
        printf("Nome: ");
        scanf("%s", aluno[i].nome);
        for (int j = 0; j < 5; j++)
        {
            printf("Disciplina %d\n", j+1);
            printf("Codigo: ");
            scanf("%s", aluno[i].disciplinas[j].codigo);
            printf("Nome: ");
            scanf("%s", aluno[i].disciplinas[j].nome);
            printf("Frequencia: ");
            scanf("%f", &aluno[i].disciplinas[j].frequencia);
            printf("Nota: ");
            scanf("%f", &aluno[i].disciplinas[j].nota);
            aluno[i].disciplinas[j].ativo = 1;
        }
    }
    // pesquisar aluno por matricula e imprimir os dados
    char matricula[10];
    printf("Matricula: ");
    scanf("%s", matricula);
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(aluno[i].matricula, matricula) == 0)
        {
            printf("Aluno %d\n", i+1);
            printf("Matricula: %s\n", aluno[i].matricula);
            printf("Nome: %s\n", aluno[i].nome);
            for (int j = 0; j < 5; j++)
            {
                printf("Disciplina %d\n", j+1);
                printf("Codigo: %s\n", aluno[i].disciplinas[j].codigo);
                printf("Nome: %s\n", aluno[i].disciplinas[j].nome);
                printf("Frequencia: %f\n", aluno[i].disciplinas[j].frequencia);
                printf("Nota: %f\n", aluno[i].disciplinas[j].nota);
                printf("Ativo: %d\n", aluno[i].disciplinas[j].ativo);
            }
        }
    }

    return 0;
}
