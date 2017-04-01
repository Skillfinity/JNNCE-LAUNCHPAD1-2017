#include <stdio.h>

int main()
{
    int x,i,n;

    printf("Enter the value of x until which the prime numbers are printed\n");
    scanf("%d",&x);

    for(n=2;n<=x;n++)
    {
        i=2;
        while(i<=n-1)
        {
          if(n%i==0)
          {
              break;
          }
          i++;
        }

    if(i==n)
    {
        printf("%d\n",n);
    }
    }
    return 0;
}
