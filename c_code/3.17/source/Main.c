#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int accountNumber=0;
	double beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;
	while (1)
	{
		printf("\nEnter account number(-1 to end):");
		scanf("%d", &accountNumber);
		if (accountNumber == -1)
		{
			break;
		}
		printf("Enter beginning balance:");
		scanf("%lf", &beginningBalance);
		printf("Enter total charges:");
		scanf("%lf", &totalCharges);
		printf("Enter total credts:");
		scanf("%lf", &totalCredits);
		printf("Enter Credit limit:");
		scanf("%lf", &creditLimit);
		
		newBalance = beginningBalance + totalCharges - totalCredits;

		if (newBalance > creditLimit) 
		{
			printf("\nAccount: %d\n", accountNumber);
			printf("Credit limit: %.2f\n", creditLimit);
			printf("Balance: %.2f\n", newBalance);
			printf("Credit Limit Exceeded.\n");
		}
	}
	return 0;
}