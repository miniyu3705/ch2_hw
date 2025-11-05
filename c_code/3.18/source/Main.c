#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double saleDollar,salary;
	while (1) 
	{
		printf("\nEnter sales in dollars (-1 to end):");
		scanf("%lf", &saleDollar);
		if (saleDollar == -1)
		{
			break;
		}
		salary = 200.0 + 0.09 * saleDollar;
		printf("Salary is:$%.2f\n", salary);
	}
	return 0;
}