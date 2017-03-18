#include <stdio.h>

int main()
{
    int i,x,count;
    printf("Enter the limit\n");
    scanf("%d",&x);

    printf("1\n");
    printf("2\n");
    printf("3\n");

    for(i=4;i<=x;i++)
    {
        for (count=2; count<=i; count++)
        {
         if((i%count)==0)
         {
             break;
         }

        }
        if(count==i)
        {
            printf("%d\n",i);
        }

    }
    return 0;
}
