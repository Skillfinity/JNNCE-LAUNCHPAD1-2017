#include <stdio.h>

int main()
{
    int i,j,x;

    printf("enter the number for x\n");
    scanf("%d",&x);

    printf("\nPRIME numbers between 1 and %d are\n",x);

    printf("%d\n%d\n%d\n",1,2,3);


    for(i=4;i<=x;i++)
    {
     for(j=2;j<=i;j++)
     {
         if(i%j==0)
             break;
     }

         if(j==i)
             printf("%d\n",i);
    }

    return 0;
}
