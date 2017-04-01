/*Write a program to compare 2 numbers. Ask the user to enter 2 integer numbers.
   Compare the numbers and display the result on console.
   For example if x and y are the 2 numbers, then the comparison output should be one of the following:

x is greater than y
x is less than y
x is equal to y

Create a Qt project called COMPARE, write your program,
 run and then submit all the Qt files created for this project for evaluation.*/

#include <stdio.h>

int main()

{
   int x,y;
   printf("enter the two numbers to be compared\n",x,y);
   scanf("%d %d",&x,&y);


   if(x<y)
       printf("x is less than y\n");
   else if(x==y)
       printf("x is equal to y\n");
   else if(x>y)
       printf("x is greater than y\n");
    return 0;
}
