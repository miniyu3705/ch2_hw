#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int row, col, size = 10;

    printf("(A)\n");
    for (row = 1; row <= size; row++)
    {
        for (col = 1; col <= row; col++)
            printf("%s","*");
        printf("\n");
    }

    printf("\n(B)\n");
    for (row = size; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
            printf("%s", "*");
        printf("\n");
    }

    printf("\n(C)\n");
    for (row = size; row >= 1; row--) 
    {
        for (col = size; col > row; col--)
            printf(" ");
        for (col = 1; col <= row; col++)
            printf("%s", "*");
        printf("\n");
    }

    printf("\n(D)\n");
    for (row = 1; row <= size; row++) 
    {
        for (col = size; col > row; col--)
            printf(" ");
        for (col = 1; col <= row; col++)
            printf("%s", "*");
        printf("\n");
    }
    return 0;
}