#include <stdio.h>

int main(int argc, char *argv[])
{  int ch;
   float V,I,R;
   printf("Enter the number according to menu to find anyone parameter in ohms law\n");
   printf("Menu\n 1.Resistance\n 2.current\n 3.voltage\n");
   printf("enter your choice\n");
   scanf("%d",&ch);

   switch(ch)
   {
   case 1:printf("enter the value of voltage and current\n");
          scanf("%f %f",&V,&I);
          R=V/I;
          printf("Resistane=%f",R);
          break;

   case 2:printf("enter the value of voltage and resistance\n");
          scanf("%f %f",&V,&R);
          I=V/R;
          printf("Current=%f",I);
          break;

   case 3:printf("enter the value of current and Resistance\n");
          scanf("%f %f",&I,&R);
          V=I*R;
          printf("Voltage=%f",V);
          break;
   }

    return 0;
}
