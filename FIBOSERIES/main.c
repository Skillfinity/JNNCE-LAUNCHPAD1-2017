#include <stdio.h>

int main(int argc, char *argv[])
{
   int f1=0,f2=1,f3,num;

   printf("Enter the value of number\n");
   scanf("%d",&num);
   while(f1<=num)
   {
       f3=f1+f2;
       printf("%d,",f1);
       f1=f2;
       f2=f3;
   }
   return 0;
}
