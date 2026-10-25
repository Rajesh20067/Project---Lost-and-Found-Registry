//Version-3-Group-8

#include <stdio.h>

#define DAILY_FINE 25.0
#define VAT 0.05

int id, days, status ;
double value, fine, vat;
char comment ;

void banner(void)
{
    printf("<<LOST AND FOUND REGESTRY>>  \n\n");
}

void show_menu(void)

{
    printf("ENTER ITEM DETAILS: \n\n");
}



void read_record(void)


{


 printf("Enter Item Status (1=Lost, 2=Found)> ");
scanf("%d", &status);


printf("Enter Item ID> ");
scanf("%d", &id);


 printf("Enter Item Value> ");
 scanf("%lf",  &value);

printf("Enter Days in Storage> ");
scanf("%d", &days);

}

   double calculate_total(int d, double v)


{

    fine = d * DAILY_FINE;
    vat = v * VAT;

    return fine + vat;


}

void print_record(double total)


{



printf("--------------------------------------------------\n");

printf("ID\tDAYS\tVALUE\tFINE\tVAT\tTOTAL\n");

printf("%d\t%d\t%.1lf\t%.2lf\t%.2lf\t%.2lf\n", id, days, value, fine, vat, total);

printf("---------------------------------------------------\n");


     printf("Any Complaint>  ");
     scanf(" %c", &comment);


printf("\n--------------------------------------------------\n");
printf("THANK YOU FOR YOUR TIME!\n");
printf("----------------------------------------------------\n");


}

int main(void)

{

    banner();
    show_menu();
    read_record();
    print_record(calculate_total(days, value));
    return 0;

}
