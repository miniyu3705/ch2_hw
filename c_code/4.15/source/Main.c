#include <stdio.h>
#include <math.h>

int main()
{  
    int year;
    double principal = 5000.0, rate, amount;

    for (rate = 0.10; rate < 0.125; rate += 0.005) 
    {
        printf("Rate: %.1f%%\n", rate * 100);
        printf("-------------------------------------\n");
        for (year = 1; year <= 15; year++)
        {
            amount = principal * pow(1.0 + rate, year);
            printf("year:% d \tamount:%.2f\n", year, amount);
        }
        printf("\n");
    }
	return 0;
}