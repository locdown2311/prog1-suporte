#include <stdio.h>
#include <string.h>
int mudaLetra(char palavra[], char letraIni, char letraDest)
{
    //CONTADOR AINDA NÃO FUNCIONAL
    int subs = 0;
    int i;
    for (i = 0; i < strlen(palavra); ++i)
    {
        if (palavra[i] == letraIni && palavra[i + 1] != '\0')
        {
            palavra[i + 1] = letraDest;
            subs++;
        }
    }
}
int main(int argc, char const *argv[])
{
    char s[128];
    char letraIni,letraDest;
    printf("[Palavra inicial]: ");
    fgets(s, 128, stdin);

    printf("\n[Letra a ser buscada]: ");
    scanf("%c",&letraIni);
    
    fflush(stdin);
    printf("\n[Letra final]: ");
    scanf("%c",&letraDest);
    fflush(stdin);

    int ocorrencias = mudaLetra(s, letraIni, letraDest);
    printf("[Palavra modificada]: %s , [OCORRENCIAS MODIFICADAS]: %d", s,ocorrencias);
    return 0;
}
