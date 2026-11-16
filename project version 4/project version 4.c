//PROJECT VERSION 4

#include <stdio.h>

#define DAILY_FINE 25.0
#define VAT 0.05

int id, days, status, count = 0;
double value, fine, vat, grand_total = 0;

void banner(void)
{
    printf(" << LOST AND FOUND REGISTRY >>\n");
}

void read_record(void)
{
    printf("Enter Item ID> ");
    scanf("%d", &id);

    while (id <= 0)
    {
        printf("ID must be positive. Enter again> ");
        scanf("%d", &id);
    }

    printf("Enter Item Value> ");
    scanf("%lf", &value);

    while (value < 0)
    {
        printf("Value cannot be negative. Enter again> ");
        scanf("%lf", &value);
    }

    printf("Enter Days in Storage> ");
    scanf("%d", &days);

    while (days < 0)
    {
        printf("Days cannot be negative. Enter again> ");
        scanf("%d", &days);
    }
}

double calculate_total(int d, double v)
{
    fine = d * DAILY_FINE;
    vat = v * VAT;
    return (fine + vat);
}

void print_record(double total)
{
    int i, j;

    if (status == 1)
        printf("\nStatus: LOST ITEM\n\n");
    else if (status == 2)
        printf("\nStatus: FOUND ITEM\n\n");


   for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 9; j++)
            printf("----------");
        printf("\n");
    }


    for (i = 1; i <= 6; i++)
    {

        if (i == 1)
            printf("ID\t\t");
        else if (i == 2)
            printf("DAYS\t\t");
        else if (i == 3)
            printf("VALUE\t\t");
        else if (i == 4)
            printf("FINE\t\t");
        else if (i == 5)
            printf("VAT\t\t");
        else if (i == 6)
            printf("TOTAL\n");
    }

    printf("%d\t\t%d\t\t%.2lf\t\t%.2lf\t\t%.2lf\t\t%.2lf\n",
           id, days, value, fine, vat, total);


//printf("---------------------------------------------------------------\n");
//printf("---------------------------------------------------------------");
 for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 9; j++)
            printf("----------");
        printf("\n");
    }


}

int main(void)
{
    int choice;
    double total;

    banner();

    do
    {
        printf("\n1. Report Lost\n2. Report Found\n");
        printf("3. Show Summary\n4. Exit\n\nChoice> ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        case 2:
            status = choice;
            read_record();
            total = calculate_total(days, value);
            print_record(total);
            count++;
            grand_total += total;
            break;

        case 3:
            printf("Total Records: %d\n", count);
            printf("Grand Total: %.2lf\n", grand_total);
            break;

        case 4:
            printf("Thank You!!!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    }
    while (choice != 4);

    return 0;
}
