#include <stdio.h>
#include"calculate.h"
int main()
{
    float k,m;
    while(1)
{
printf("\n enter two values:\n");
scanf("%f %f",&k,&m);

         printf("addition of two numbers:%f\n",add(k,m));
         printf("subtraction of two numbers:%f\n",sub(k,m));
         printf("multiplication of two numbers:%f\n",mul(k,m));
         printf("division of two numbers:%f\n",divide(k,m));
         printf("prime numbers between x and y are\n");
         prime(k,m);
    }
      return 0;

}
