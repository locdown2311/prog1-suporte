#include <stdio.h>
#include <stdlib.h>


// struct para endereco
typedef struct {
    char rua[50];
    int numero;
    char bairro[50];
    char cidade[50];
    char estado[50];
}TEndereco;

// struct para proprietario
typedef struct {
    char nome[50];
    char telefone[50];
}TProprietario;
// struct para imobiliaria
typedef struct {
    char tipo[30];
    TEndereco endereco;
    float valor;
    char situacao[30];
    TProprietario proprietario;

}TImobiliaria;

