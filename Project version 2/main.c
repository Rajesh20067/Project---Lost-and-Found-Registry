
#include <stdio.h>

#define DAILY_FINE 25.0
#define VAT 5.0

int main(void)

{

int id, days;
 double value, fine, vat, total;
char comment;
    
printf("Enter Item ID>  ");
scanf("%d", &id);

 printf("Enter Item Value>  ");
scanf("%lf",  &value);

printf("Enter Days in Storage>  ");
scanf("%d", &days);

fine = days * DAILY_FINE;
vat = value * VAT;
total = fine + vat;


  printf("-------------------------------------------------------------------------------\n");
    
printf("\nID\tDAYS\tVALUE\tFINE\tVAT\tTOTAL\n");

 printf("%d\t%d\t%.1lf\t%.2lf\t%.2lf\t%.2lf\n",  id, days, value, fine, vat, total);
   printf("---------------------------------------------------------------------------------\n");

printf("Any Complaint? > ");
 scanf(" %c", &comment);

return 0;


}
