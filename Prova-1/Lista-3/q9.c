#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Lado a: ");
    scanf("%d", &a);

    printf("Lado b: ");
    scanf("%d", &b);

    printf("Lado c: ");
    scanf("%d", &c);

    if ((a == b) && (b == c))
        printf("Equilatero\n");
    else if ((a != b) && (a != c) && (b != c))
        printf("Escaleno\n");
    else
        printf("Isosceles\n");
    return 0;
}
