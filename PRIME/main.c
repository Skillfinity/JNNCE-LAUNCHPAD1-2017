#include <stdio.h>
int main()
{

    int i,j, num;
    printf("Enter the value of num\n");
    scanf("%d",&num);
    if(num==2)
        printf("Prime numbers in the given range are %d \n",num);
    else
    {
    printf("Prime numbers in the given range are \n");
    printf("1\n");
    printf("2\n");
    printf("3\n");
     for(i=4;i<=num;i++)
       {
           for (j=2; j<=i; j++)
           {
            if((i%j)==0)
            {
                break;
            }

           }
           if(j==i)
           {
               printf("%d\n",i);
           }
       }
    }
           return 0;
}






