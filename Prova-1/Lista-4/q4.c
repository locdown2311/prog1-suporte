#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;

    printf("Outra visualizacao: \n");
    for ( i = 0; i < 4; i++)
    {
        printf("\n");
        for ( j = 0; j < 4; j++)
        {
            printf("%d ",j);
        }
        
    }
    
    return 0;
}
