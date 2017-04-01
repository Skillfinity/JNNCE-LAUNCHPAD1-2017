/*Ask the user to enter 2 integer numbers. Then ask the user to enter ‘a’ for addition,
‘s’ for subtraction, ‘d’ for division and ‘m’ for multiplication.
Using switch-case statement, either add, subtract, divide or multiply and display the
result on the console. If a character other than ‘a’,’s’,’d’ or ‘m’ is entered by the user, display an error.

 Create a Qt project called SWITCHCASE, write your program,
run and then submit all the Qt files created for this project for evaluation.*/


#include <stdio.h>


int main()
{

   float a,b,c;

   printf("enter the two  numbers\n",a,b);
   scanf("%f %f",&a,&b);


        char cal;
        while(1)
        {
   printf("press a for addition, s for subtraction, m for multiplication and d for division\n",cal);
   scanf("%c",&cal);


   switch(cal)
   {

       case 'a':
                  c=a+b;
                  printf("%f+%f=%f\n",a,b,c);
       break;


       case 's':
                   c=a-b;
                    printf("%f-%f=%f\n",a,b,c);
       break;


       case 'm':
                  c=a*b;
                  printf("%f*%f=%f\n",a,b,c);
       break;


       case 'd':
                  c=a/b;
                  printf("%f/%f=%f\n",a,b,c);
       break;


       default:
           printf("enter the valid character\n");
       break;


   }
  }

   return 0;
}
