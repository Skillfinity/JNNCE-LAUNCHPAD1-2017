#include <stdio.h>

int main()
{  int n,fib1=0,fib2=1,i,sum=0;
    printf("enter the number to get fibonacci series\n");
    scanf("%d",&n);
    printf("%d\n%d\n",fib1,fib2);
    while(sum<n)
    {

        sum=fib1+fib2;
        printf("%d\n",sum);
        fib1=fib2;
        fib2=sum;


    }
    return 0;
}
