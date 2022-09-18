#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char palavra[80];
    printf("Digite as palavras desejadas: ");
    fgets(palavra,80,stdin);
    const char s[2] = " ";
    char *token;

    token = strtok(palavra, s);

    printf("\n[Apos maiusculas]\n");
    while (token != NULL)
    {
        token[0] = toupper(token[0]);
        printf("%s ", token);
        token = strtok(NULL, s);
    }
    return 0;
}
