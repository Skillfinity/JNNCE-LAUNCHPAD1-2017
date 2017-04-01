


/*Write a program to print prime numbers until x. Get the value of x from user.

Create a Qt project called PRIME, write your program, run and then submit all
the Qt files created for this project for evaluation.*/


#include <stdio.h>

int main()
{


    int num,i=1,j,count;

    printf("Enter Num value To Print Prime Numbers between 1 and Num: ");
    scanf("%d",&num);
    printf("Prime Numbers upto %d :\n \n",num);

    while(i<=num)
    {
    count=0;
    for(j=1;j<=i;j++)
    {
    if(i%j==0) //checking whether num is dvisible by j
    count++;
    }
    if(count==2)  //if num is divisible by 2 numbers,then it is prime
    printf("%d ",i);
    i++;
    }
    printf("\n\n");

}
