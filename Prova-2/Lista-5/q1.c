#include <stdio.h>
int main(int argc, char const *argv[])
{
    int vetor[10];
    int i,j;
    for ( i = 0; i <= 10; i++)
    {
        vetor[i] = (2*i);
    }

    for ( j = 0; j <= 10; j++)
    {
        printf("%d ",vetor[j]);
    }
    
    return 0;
}
