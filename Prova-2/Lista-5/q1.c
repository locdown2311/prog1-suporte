#include <stdio.h>
int main(int argc, char const *argv[])
{
    int vetor[10];
    int i = 0;
    while (i<10)
    {
        vetor[i] = 2*i;
        i++;
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ",vetor[i]);
    }
    
    
    return 0;
}
