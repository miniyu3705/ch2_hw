#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    const int limit = 500;
    int a, b, c, count = 0;
    printf("All Pythagorean triples with sides <= %d\n", limit);
    printf("  a\t  b\t  c\n");
    printf("------------------------\n");
    for (a = 1; a <= limit; a++)
    {
        for (b = a; b <= limit; b++) 
        {  
            for (c = b; c <= limit; c++)
            { 
                if (a * a + b * b == c * c)
                {
                    printf("%3d\t%3d\t%3d\n", a, b, c);
                    count++;
                }
            }
        }
    }
    printf("------------------------\n");
    printf("Total triples: %d\n", count);
    return 0;
}