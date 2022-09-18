#include <stdio.h>
#include <stdlib.h>
int contaConso(char palavra[], int tam)
{
    int contadorCon = 0;
    int i;
    for (i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == 'b' || palavra[i] == 'b' ||
            palavra[i] == 'c' || palavra[i] == 'C' ||
            palavra[i] == 'd' || palavra[i] == 'D' ||
            palavra[i] == 'f' || palavra[i] == 'F' ||
            palavra[i] == 'g' || palavra[i] == 'G' ||
            palavra[i] == 'h' || palavra[i] == 'H' ||
            palavra[i] == 'j' || palavra[i] == 'J' ||
            palavra[i] == 'k' || palavra[i] == 'K' ||
            palavra[i] == 'l' || palavra[i] == 'L' ||
            palavra[i] == 'm' || palavra[i] == 'M' ||
            palavra[i] == 'n' || palavra[i] == 'N' ||
            palavra[i] == 'p' || palavra[i] == 'P' ||
            palavra[i] == 'q' || palavra[i] == 'Q' ||
            palavra[i] == 'r' || palavra[i] == 'R' ||
            palavra[i] == 's' || palavra[i] == 'S' ||
            palavra[i] == 't' || palavra[i] == 'T' ||
            palavra[i] == 'v' || palavra[i] == 'V' ||
            palavra[i] == 'w' || palavra[i] == 'W' ||
            palavra[i] == 'x' || palavra[i] == 'X' ||
            palavra[i] == 'y' || palavra[i] == 'Y' ||
            palavra[i] == 'z' || palavra[i] == 'Z')
        {
            contadorCon++;
        }
        
    }
    return contadorCon;
}

int contaVogais(char palavra[], int tam)
{
    int contadorVog = 0;
    int i;
    for (i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == 'a' || palavra[i] == 'A' ||
            palavra[i] == 'e' || palavra[i] == 'E' ||
            palavra[i] == 'I' || palavra[i] == 'i' ||
            palavra[i] == 'o' || palavra[i] == 'O' ||
            palavra[i] == 'u' || palavra[i] == 'U')
        {
            contadorVog++;
        }
    }
    return contadorVog;

}
int contaEspacos(char palavra[], int tam)
{
    int contadorEsp = 0;
    int i;
    for (i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == ' ')
        {
            contadorEsp++;
        }
    }
    return contadorEsp;
}
int main(int argc, char const *argv[])
{
    
    char palavra[50];
    printf("Digite uma palavra de ate 49 caracteres: ");
    fgets(palavra,50,stdin);
    int cVog = contaVogais(palavra,50);
    int cCon = contaConso(palavra,50);
    int cEsp = contaEspacos(palavra,50);

    printf("A frase possui [%d] vogais, [%d] consoantes e [%d] espacos.",cVog,cCon,cEsp);
    return 0;
}
