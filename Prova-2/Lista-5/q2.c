#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i;
    float notas[40];
    float media = 0;
    printf("Digite as medias abaixo: \n");

    for ( i = 0; i < 40; i++)
    {
        scanf("%f",&notas[i]);
        media += notas[i];
    }
    printf("Media: %.2f",media /= 40);
    
    
    return 0;
}
