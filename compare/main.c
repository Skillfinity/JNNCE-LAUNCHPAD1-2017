#include <stdio.h>

int main()
{
    while(1)
    {
        int a,b;
        printf("enter the two numbers\n");
        scanf("%d %d", &a, &b);
        if(a==b)
        {
            printf("equal numbers\n");
        }
        else if(a>b)
        {
            printf("a is greater than b\n");
        }
        else
        {
            printf("a is lesser than b\n");
        }
    }
    return 0;
}
