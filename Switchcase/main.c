#include <stdio.h>

int main()
{
   float num1,num2,sub;
   char operation;

   //a=addition
   //s=subtraction
   //m=multiplication
   //d=division

   printf("Enter the required operation to be performed\n");
   scanf("%c",&operation);

   printf("Enter two numbers\n");
   scanf("%f %f",&num1,&num2);



   switch(operation)
   {
   case 'a':
       printf("The result of addition is %f\n",num1+num2);
       break;

   case 's':
       if(num1>num2)
       {
           sub=num1-num2;
       }
       else
           sub=num2-num1;
       printf("The result of subtraction is %f\n",sub);
       break;

   case 'd':
       if(num2!=0)
           printf("The result of divison is %f\n",num1/num2);
       else
           printf("The result of division is infinite\n");
       break;

   case 'm':
       printf("The result of multiplication is %f\n",num1*num2);
       break;

   default:
       printf("The operator not found\n");

   }

    return 0;
}
