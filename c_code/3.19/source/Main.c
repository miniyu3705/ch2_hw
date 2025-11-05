#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Main.h"

int main()
{
	int days = 0;
	double principal,rate,interest;
	while (1)
	{
		printf("\nEnter loan principal(-1 to end):");
		scanf("%lf", &principal);
		if (principal == -1)
		{
			break;
		}
		printf("Enter interest rate:");
		scanf("%lf", &rate);
		printf("Enter term of the loan in days:");
		scanf("%d", &days);

		interest = principal * rate * days / 365.0;
		printf("The interest charge is $%.2f\n", interest);
	}
	return 0;
}