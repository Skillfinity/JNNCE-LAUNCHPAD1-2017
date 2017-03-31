#include <stdio.h>

int main()
{
   while(1)
   {
   int x,fib1,fib2,fib3,count=0;

   fib1=0;
   fib2=1;
   printf("enter the value of x\n");
   scanf("%d",&x);
   printf("%d\n",fib1);
   printf("%d\n",fib2);
   count=2;
   while(count<=x)
   {
   fib3=fib1+fib2;
   fib1=fib2;
   fib2=fib3;
   printf("%d\n",fib3);
   count++;
   }
   }
    return 0;
}
