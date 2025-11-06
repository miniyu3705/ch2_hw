#include <stdio.h>

int main() 
{
    int row, col, size = 10;

    printf("(A)        (B)          (C)          (D)\n");
    for (row = 1; row <= size; row++)
    {
        for (col = 1; col <= row; col++)
            printf("%s","*");
        for (col = row; col < size; col++)
            printf(" ");
        printf(" ");
        for (col = 1; col <= size - row + 1; col++)
            printf("*");
        for (col = 1; col < row; col++)
            printf(" ");
        printf("   ");
        for (col = 1; col < row; col++)
            printf(" ");
        for (col = row; col <= size; col++)
            printf("*");
        printf("   ");
        for (col = 1; col <= size - row; col++)
            printf(" ");
        for (col = 1; col <= row; col++)
            printf("*");
        printf("\n");
    }    
    return 0;
}