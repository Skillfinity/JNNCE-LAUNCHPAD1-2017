#include <stdio.h>

int main()
{
    int i,x;

    printf("Enter the value of x\n");
    scanf("%d",&x);

    printf("The odd numbers are:\n");

    for(i=0;i<=x;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
