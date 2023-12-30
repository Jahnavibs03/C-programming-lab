/*To generate an electricity bill by accepting meter number of the consumer, number of units consumed and print out the detail charges for the below scenario:
An electricity board charges the following rates for the use of electricity: 
	for the first 200 units 80 paise per unit
	for the next 100 units 90 paise per unit 
	beyond 300 units Rs 1 per unit 
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs. 400, then an additional surcharge of 15% of total amount is charged.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
   int meter_number,consumed;
   float charge,surcharge;
    system("clear");
    printf("enter the meter number:\n");
    scanf("%d",&meter_number);
    printf("enter units consumed\n");
    scanf("%d",&consumed);
    if(consumed<=200)
    {charge=100+consumed*0.80;}
    else if(consumed<=300)
    {charge=100+(200*0.80)+(consumed-200)*0.90;}
    else 
    {charge=100+(200*0.80)+(100*0.90)+(consumed-300)*1;}
    if(charge>400)
   { surcharge=charge*0.15;
       charge=charge+(surcharge);}
       else
       {surcharge=0;
       charge=charge+(surcharge);}
       printf("meter number = %d\n surcharges if any = %f\n total amount = %f\n",meter_number,surcharge,charge);
}
