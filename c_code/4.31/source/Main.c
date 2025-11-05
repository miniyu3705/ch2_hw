#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n = 5, space, stars;
    for (int i = 1; i <= n; i++) 
    {
        for (space = n - i; space > 0; space--)
            printf(" ");
        for (stars = 1; stars <= 2 * i - 1; stars++)
            printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (space = n - i; space > 0; space--)
            printf(" ");
        for (stars = 1; stars <= 2 * i - 1; stars++)
            printf("*");
        printf("\n");
    }
    return 0;
}