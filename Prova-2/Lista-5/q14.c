#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, valor = 0;
    char palavra[100], inversa[100];

    printf("\nDigite uma palavra: ");
    fgets(palavra,100,stdin);

    for (i = 0; palavra[i]; i++)
    {
        palavra[i] = tolower(palavra[i]);
    }

    strcpy(inversa, palavra);

    strrev(inversa);

    valor = strcmp(palavra, inversa);

    if (valor == 0)
        printf("\nA palavra %s e palíndroma\n", palavra);
    else
        printf("\nA palavra %s nao e palíndroma\n", palavra);

    return 0;
}