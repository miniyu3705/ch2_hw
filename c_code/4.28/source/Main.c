#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int paycode;           
    double weeklyPay;   
    while (1) {
        printf("Enter employee paycode (-1 to end): ");
        scanf("%d", &paycode);
        if (paycode == -1) 
        {
            break;

        }
        switch (paycode) {
        case 1: { // Manager
            printf("Enter manager's weekly salary: ");
            scanf("%lf", &weeklyPay);
            break;
        }
        case 2: { // Hourly worker
            double hoursWorked, hourlywage;
            printf("Enter hourly worker's hourlywage: ");
            scanf("%lf", &hourlywage);
            printf("Enter number of hoursWorked: ");
            scanf("%lf", &hoursWorked);

            if (hoursWorked <= 40)
                weeklyPay = hoursWorked * hourlywage;
            else
                weeklyPay = 40 * hourlywage + (hoursWorked - 40) * hourlywage * 1.5;
            break;
        }
        case 3: { // Commission worker
            double grosssales;
            printf("Enter commission worker's gross weekly sales: ");
            scanf("%lf", &grosssales);
            weeklyPay = 250 + grosssales * 0.057;
            break;
        }
        case 4: { // Pieceworker
            double items, itemPrice;
            printf("Enter number of items produced: ");
            scanf("%lf", &items);
            printf("Enter  item price:");
            scanf("%lf", &itemPrice);
            weeklyPay = items * itemPrice;
            break;
        }
        default:
            printf("Invalid pay code. Please enter 1, 2, 3, or 4.\n");
            continue;
        }
        printf("Weekly pay is: $%.2f\n\n", weeklyPay);
    }
    printf("Program ended.\n");
    return 0;
}