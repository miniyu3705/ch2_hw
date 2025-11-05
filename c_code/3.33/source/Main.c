#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int lenght, breadth;
		printf("Enter lenght:");
		scanf("%d", &lenght);
		printf("Enter breadth:");
		scanf("%d", & breadth);
		for (int i = 1; i <= lenght; i++) {
			for (int j = 1; j <= breadth; j++) {
				if ((i == 1) || (i == lenght) || (j == 1) || (j == breadth))
					printf("+");
				else
					printf(" ");
			}
			printf("\n");
		}
	return 0;
}