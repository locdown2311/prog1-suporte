#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    float notas[4];
    float notaFinal;
} TAluno;
int main(int argc, char const *argv[])
{
    TAluno aluno[40];
    int i, j;
    int aprovados = 0;
    int reprovados = 0;
    for (i = 0; i < 40; i++)
    {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &aluno[i].matricula);
        fflush(stdin);
        for (j = 0; j < 4; j++)
        {
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &aluno[i].notas[j]);
            fflush(stdin);
        }

        aluno[i].notaFinal = (aluno[i].notas[0] + aluno[i].notas[1] + aluno[i].notas[2] + aluno[i].notas[3]) / 4;
        if (aluno[i].notaFinal >= 6)
        {
            aprovados++;
        }
        else
        {
            reprovados++;
        }
    }

    for (i = 0; i < 40; i++)
    {
        printf("Matricula: %d\n", aluno[i].matricula);
        for (j = 0; j < 4; j++)
        {
            printf("Nota %d: %.2f\n", j + 1, aluno[i].notas[j]);
        }
        printf("Nota final: %.2f\n", aluno[i].notaFinal);

        if (aluno[i].notaFinal >= 6)
        {
            printf("Aprovado\n");
        }
        else
        {
            printf("Reprovado\n");
        }
    }
    printf("====================================\n");
    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    return 0;
}
