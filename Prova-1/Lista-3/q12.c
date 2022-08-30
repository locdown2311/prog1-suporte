#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ip;
    printf("Digite o IP: ");
    scanf("%d", &ip);

    if (ip < 35)
    {
        printf("BOM");
    }
    else if (35 <= ip && ip < 50)
    {
        printf("ATENCAO");
    }
    else if (50 <= ip && ip < 75)
    {
        printf("PERIGOSO");
    }
    else
    {
        printf("EMERGENCIA");
    }

    return 0;
}
