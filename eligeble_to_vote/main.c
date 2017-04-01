
/*Ask the user to enter age. Check if the age entered is greater or equal to 18,
if true display “Eligible to vote” on console.
If age is less than 18, display “Not eligible to vote” on console.

Create a Qt project called VOTE, write your program,
run and then submit all the Qt files created for this project for evaluation.*/


#include <stdio.h>

int main()
{
  int a;
   printf("enter the age\n",a);
   scanf("%d",&a);
   if(a>=18)
      printf("Eligible to vote\n");
   else
      printf("Not eligible to vote\n ");

    return 0;
}
