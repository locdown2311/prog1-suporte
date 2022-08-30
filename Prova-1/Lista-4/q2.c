#include <stdio.h>
int main(int argc, char const *argv[])
{
    //Forma diferenciada usando vetor
    int sequencia [] = {10,9,8,7,6,5,4,3,2,1};
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%d ",sequencia[i]);
    }
    printf("\n\n");
    //Forma basica usando for
    for (i = 10; i > 0; i--)
    {
        printf("%d ",i);
    }
    
    return 0;
}
