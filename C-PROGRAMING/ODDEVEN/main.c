#include <stdio.h>

int main()
{
    int i,x;

    printf("enter the number for x\n");
    scanf("%d",&x);


    printf("\nODD numbers between 1 and %d are\n",x);

    for(i=1;i<=x;i++)
    {
        if(i%2!=0)

            printf("%d\n",i);

    }

    return 0;
}
