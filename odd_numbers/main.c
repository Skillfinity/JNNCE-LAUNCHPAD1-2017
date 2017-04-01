


/*Write a program to print odd numbers between 0 and x. Get value of x from the user.

Create a Qt project called ODDEVEN, write your program, run and then submit all the
Qt files created for this project for evaluation.*/


#include <stdio.h>

int main()
{
   int a=0,i;
   printf("enter the value upto which odd numbers are needed to be diplayed\n",a);
   scanf("%d",&a);
   for(i=0;i<=a;i++)
   {
       if(i%2!=0)
       {
           printf("%d\n",i);

       }
   }
    return 0;
}
