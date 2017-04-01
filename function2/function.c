#include<stdio.h>
float add(float a,float b)
{
    return(a+b);
}
float sub(float a,float b)
{ if(a>b)
    return(a-b);
    else
        return(b-a);

}

float mul(float a,float b)
{
    return(a*b);
}

float divide(float a,float b)
{
return(a/b);
}

void prime(float x,float y)
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
