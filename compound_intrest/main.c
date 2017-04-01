#include <stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
   float amount,principle,rate,year,C_I;
   printf("enter the principle amount:\n");
   scanf("%f",&principle);
   printf("enter the rate and year:\n");
   scanf("%f %f",&rate,&year);
   amount=principle*pow((1+rate/100),year);
   printf("amout to be paid=%f\n",amount);
   C_I=amount-principle;
   printf("compound intrest=%f\n",C_I);
   return 0;
}
