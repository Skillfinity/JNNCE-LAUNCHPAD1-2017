#include <stdio.h>
#include"compute.h"
int main()
{
    int k,m;
    while(1)
{
printf("\n enter two values:\n");
scanf("%d %d",&k,&m);

         printf("addition of two numbers:%d\n",add(k,m));
         printf("subtraction of two numbers:%d\n",sub(k,m));
         printf("multiplication of two numbers:%d\n",mul(k,m));
         printf("division of two numbers:%d\n",divide(k,m));
         printf("prime numbers between x and y are\n");
         prime(k,m);
    }
      return 0;

}
