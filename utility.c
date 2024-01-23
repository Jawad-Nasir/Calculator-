#include <stdio.h>

void calculate_bill();
void currency_conversion();

int main() {
    int choose, a = 1;

    while (a == 1) {
        printf("\n\n**************************************WELCOME****************************************\n"
               "--> Enter 1 for Bill Calculation\n"
               "--> Enter 2 for Currency Conversions\n"
               "--> Enter 3 to Exit\n");

        scanf("%d", &choose);

        switch (choose) {
            case 1:
                calculate_bill();
                break;
            case 2:
                currency_conversion();
                break;
            case 3:
                printf("Exiting the program. Goodbye!\n");
                a = 0;
                break;
            default:
                printf("Invalid Entry!!\n");
                break;
        }
    }

    return 0;
}

/* DEFINING THE FUNCTION FOR BILL CALCULATION */
void calculate_bill() {
    int choose, curr_units, prev_units, units;
    float bill;

    printf("\nPlease,\n");
    printf("--> Enter 1 for Electricity Bill\n");
    printf("--> Enter 2 for Gas Bill\n");

    scanf("%d", &choose);

    switch (choose) {
        case 1:
            printf("Please enter number of units for this month: ");
            scanf("%d", &curr_units);
            printf("Please enter number of units for the previous month: ");
            scanf("%d", &prev_units);

            units = curr_units - prev_units;

            if (units <= 200) {
                printf("Your bill for this month is Rs %.3f", bill = units * 50);
            } else if (units > 200) {
                printf("Your bill for this month is Rs %.3f", bill = units * 61);
            }
            break;
        case 2:
            printf("Please enter number of units for this month: ");
            scanf("%d", &curr_units);
            printf("Please enter number of units for the previous month: ");
            scanf("%d", &prev_units);

            units = curr_units - prev_units;

            if (units <= 100) {
                printf("Your bill for this month is R.s %f", bill = units * 18);
            } else if (units > 150) {
                printf("Your bill for this month is R.s %f", bill = units * 30);
            }
            break;

        default:
            printf("Invalid Entry!!");
            break;
    }
}

/* DEFINING THE FUNCTION FOR CURRENCY EXCHANGE */
void currency_conversion() {
    int currency;
    double amount, converted;

    printf("\nSelect the currency you want to exchange:\n");
    printf("1. USD to PKR\n");
    printf("2. PKR to USD\n");
    printf("3. DIRHAM to PKR\n");
    printf("4. PKR to DIRHAM\n");
    printf("5. RIYAL to PKR\n");
    printf("6. PKR to RIYAL\n");
    printf("7. POUND to PKR\n");
    printf("8. PKR to POUND\n");
    printf("9. EUR to PKR\n");
    printf("10. PKR to EUR\n");
    scanf("%d", &currency);

    switch (currency) {
        case 1:
            printf("Enter your amount in USD: ");
            scanf("%lf", &amount);
            printf("PKR = %.2lf", converted = amount * 276.91);
            break;
        case 2:
            printf("Enter your amount in PKR: ");
            scanf("%lf", &amount);
            printf("USD = %.2lf", converted = amount / 276.91);
            break;
        case 3:
            printf("Enter your amount in DIRHAMS: ");
            scanf("%lf", &amount);
            printf("PKR = %.2lf", converted = amount * 75.89);
            break;
        case 4:
            printf("Enter your amount in PKR: ");
            scanf("%lf", &amount);
            printf("DIRHAM = %.2lf", converted = amount / 75.89);
            break;
        case 5:
            printf("Enter your amount in RIYAL: ");
            scanf("%lf", &amount);
            printf("PKR = %.2lf", converted = amount * 74.32);
            break;
        case 6:
            printf("Enter your amount in PKR: ");
            scanf("%lf", &amount);
            printf("RIYAL = %.2lf", converted = amount / 74.32);
            break;
        case 7:
            printf("Enter your amount in POUND: ");
            scanf("%lf", &amount);
            printf("PKR = %.2lf", converted = amount * 351.99);
            break;
        case 8:
            printf("Enter your amount in PKR: ");
            scanf("%lf", &amount);
            printf("POUND = %.2lf", converted = amount / 351.99);
            break;
        case 9:
            printf("Enter your amount in EUR: ");
            scanf("%lf", &amount);
            printf("PKR = %.2lf", converted = amount * 304.41);
            break;
        case 10:
            printf("Enter your amount in PKR: ");
            scanf("%lf", &amount);
            printf("EUR = %.2lf", converted = amount / 304.41);
            break;
        default:
            printf("SELECT A VALID CURRENCY!!\n");
            break;
    }
}
