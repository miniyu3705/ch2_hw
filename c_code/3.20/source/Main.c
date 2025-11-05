#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double hours, rate, salary;
	while (1)
	{
		printf("\nEnter # of hours worked (-1 to end):");
		scanf("%lf", &hours);
		if (hours == -1)
		{
			break;
		}
		else
		{
			printf("Enter hourly rate of the worker ($00.00):");
			scanf("%lf", &rate);
			if (hours <= 40)
				salary = hours * rate;
			else
				salary = 40 * rate + (hours - 40) * rate * 1.5;
		}
		printf("Salary is $ %.2f\n", salary);
	}
	return 0;
}