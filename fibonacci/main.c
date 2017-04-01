#include <stdio.h>

int main()
{
   int x,next=0, first =0, second=1;

   printf("Enter the value of x\n");
   scanf("%d",&x);

   printf("The fibonacci series is:\n");
   printf("%d\n",first);
   printf("%d\n",second);

   while(next<x)
   {
     next=first+second;
     first=second;
     second=next;
     printf("%d\n",next);
   }
    return 0;
}
