#include<stdio.h>
int add(int a,int b)
{
    return(a+b);
}
int sub(int a,int b)
{ if(a>b)
    return(a-b);
    else
        return(b-a);

}

int mul(int a,int b)
{
    return(a*b);
}

int divide(int a,int b)
{
return(a/b);
}

void prime(int x,int y)
{
    int i,j,isPrime;


    for(i=x; i<=y; i++)
    {
        isPrime=1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
               isPrime = 0;
                break;
            }
        }

    if(isPrime==1)
        {
            printf("%d, ", i);
        }
    }

}
