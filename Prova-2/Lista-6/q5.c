#include <stdio.h>
#include <stdlib.h>
typedef struct q5
{
    char nome[100];
    char tipo[100];
    float nota;
} TRestaurante;
void ordenaRestaurantes(TRestaurante *restaurantes, int n)
{
    int i, j;
    TRestaurante aux;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (restaurantes[i].nota < restaurantes[j].nota)
            {
                aux = restaurantes[i];
                restaurantes[i] = restaurantes[j];
                restaurantes[j] = aux;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    // 1. Crie um vetor de 10 restaurantes.
    TRestaurante restaurante[10];
    char tipo[100];
    int i;
    // 2. Leia os dados de cada restaurante.
    for (i = 0; i < 10; i++)
    {
        printf("Digite o nome do restaurante %d: ", i + 1);
        fgets(restaurante[i].nome, 100, stdin);
        printf("Digite o tipo do restaurante %d: ", i + 1);
        fgets(restaurante[i].tipo, 100, stdin);
        printf("Digite a nota do restaurante %d: ", i + 1);
        scanf("%f", &restaurante[i].nota);
        fflush(stdin);
    }
    ordenaRestaurantes(restaurante, 10);
    // Menu com as opções: 
    //1. Listar todos os restaurantes 
    //2. Listar restaurantes com tipo de comida
    //3. Listar os 5 restaurantes com nota >=6 para um tipo de comida
    //4. Listar os 5 restaurantes com maiores notas de 0 a 10
    //5. Sair
    int opcao;
    do
    {
        printf("1. Listar todos os restaurantes\n");
        printf("2. Listar restaurantes com tipo de comida\n");
        printf("3. Listar os 5 restaurantes com nota >=6 para um tipo de comida\n");
        printf("4. Listar os 5 restaurantes com maiores notas de 0 a 10\n");
        printf("5. Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            for (i = 0; i < 10; i++)
            {
                printf("Nome: %s", restaurante[i].nome);
                printf("Tipo: %s", restaurante[i].tipo);
                printf("Nota: %.2f\n", restaurante[i].nota);
            }
            break;
        case 2:
            printf("Digite o tipo de comida: ");
            fgets(tipo, 100, stdin);
            for (i = 0; i < 10; i++)
            {
                if (strcmp(restaurante[i].tipo, tipo) == 0)
                {
                    printf("Nome: %s", restaurante[i].nome);
                    printf("Tipo: %s", restaurante[i].tipo);
                    printf("Nota: %.2f\n", restaurante[i].nota);
                }
            }
            break;
        case 3:
            printf("Digite o tipo de comida: ");
            fgets(tipo, 100, stdin);
            int cont = 0;
            for (i = 0; i < 10; i++)
            {
                if (strcmp(restaurante[i].tipo, tipo) == 0 && restaurante[i].nota >= 6)
                {
                    printf("Nome: %s", restaurante[i].nome);
                    printf("Tipo: %s", restaurante[i].tipo);
                    printf("Nota: %.2f\n", restaurante[i].nota);
                    cont++;
                }
                if (cont == 5)
                {
                    break;
                }
            }
            break;
        case 4:
            for (i = 0; i < 5; i++)
            {
                printf("Nome: %s", restaurante[i].nome);
                printf("Tipo: %s", restaurante[i].tipo);
                printf("Nota: %.2f\n", restaurante[i].nota);
            }
            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (opcao != 5);

    return 0;
}
