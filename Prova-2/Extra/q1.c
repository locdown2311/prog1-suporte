#include <stdio.h>
#include <stdlib.h>

// struct com nome, turma e 4 notas
typedef struct {
    char nome[50];
    char turma[10];
    float notas[4];
}TAluno;

// ou
// typedef struct {
//     char nome[50];
//     char turma[10];
//     float nota1,nota2,nota3,nota4
// }TAluno;



int main(int argc, char const *argv[])
{
    TAluno aluno;
    printf("Nome: ");
    scanf("%s", aluno.nome);
    printf("Turma: ");
    scanf("%s", aluno.turma);
    printf("Notas: ");
    for (int i = 0; i < 4; i++)
    {
        printf("Nota %d: ", i+1);
        scanf("%f", &aluno.notas[i]);
    }
    return 0;
}
