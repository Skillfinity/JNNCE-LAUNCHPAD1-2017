#include <stdio.h>

int main()
{
    int x,y;

    printf("ENTER THE TWO NUMBERS:\n");
    scanf("%d,%d",&x ,&y);

    if(x == y)
    {
     printf("two numbers are equal\n");
    }

     else if(x > y)
        printf("number %d is greater than number %d\n",x,y);

    else
        printf("number %d is lesser than number %d\n",x,y);


    return 0;
}
