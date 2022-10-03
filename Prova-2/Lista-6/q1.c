#include<stdlib.h>
#include<stdio.h>

typedef struct{
    char nome[100];
    float salario;
    char cpf[16];
    int idade;
    int sexo;
}TFicha;
int main(int argc, char const *argv[])
{
    TFicha ficha;
    printf("Digite o nome: ");
    fgets(ficha.nome, 100, stdin);
    printf("Digite o salario: ");
    scanf("%f",&ficha.salario);
    fflush(stdin);
    printf("Digite o cpf: ");
    fgets(ficha.cpf, 16, stdin);
    printf("Digite a idade: ");
    scanf("%d",&ficha.idade);
    printf("Digite o sexo: ");
    scanf("%d",&ficha.sexo);
        
    printf("Nome: %s",ficha.nome);
    printf("\nSalario: %.2f",ficha.salario);
    printf("\nCPF: %s",ficha.cpf);
    printf("\nIdade: %d",ficha.idade);
    printf("\nSexo: %d",ficha.sexo);

    return 0;
}
