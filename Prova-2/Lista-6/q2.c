#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char nome[100];
    char turma[4];
    float notas[4];
}TTurma;
int main(int argc, char const *argv[])
{
    TTurma turma;
    int i;
    printf("Digite o nome: ");
    fgets(turma.nome, 100, stdin);
    printf("Digite a turma: ");
    fgets(turma.turma, 4, stdin);

    for ( i = 0; i < 4; i++)
    {
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &turma.notas[i]);
    }

    printf("Nome: %s",turma.nome);
    printf("Turma: %s",turma.turma);
    for ( i = 0; i < 4; i++)
    {
        printf("Nota %d: %.2f\n", i+1, turma.notas[i]);
    }


    
    return 0;
}
