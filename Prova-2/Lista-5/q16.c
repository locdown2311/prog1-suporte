#include <stdio.h>
int main(int argc, char const *argv[])
{
    int vetOriginal[5], vetInvert[5];
    int i, j;
    for(i = 0; i < 5; i++) {
        printf("Digite um numero!\n");
        scanf("%d", &vetOriginal[i]);
    }

    printf("Vetor invertido: \n");
    printf("[");
    for(i=0, j = 4; i<5 && j >= 0; i++, j-- ) {
        vetInvert[i] = vetOriginal[j];
        printf("%d ", vetInvert[i]);
    }
    printf("]");

}
