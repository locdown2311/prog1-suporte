#include <stdio.h>
int main(int argc, char const *argv[])
{
    int A = 5000000;
    int B = 7000000;
    int natA = A * 0.03;
    int natB = B * 0.02;
    int anos = 0;

    while (A < B)
    {
        A += natA;
        B += natB;
        anos++;
    }
    printf("Tempo em anos para A > B: %d",anos);
    return 0;
}