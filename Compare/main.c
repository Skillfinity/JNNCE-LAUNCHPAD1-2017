#include <stdio.h>

int main()
{
    int x,y;

    printf("Enter two numbers\n");
    scanf("%d %d",&x,&y);

    if(x>y)
    {
        printf("%d is greater than %d\n",x,y);
    }
    else if(y>x)
    {
        printf("%d is greater than %d\n",y,x);
    }
    else
        printf("%d is equal to %d\n",x,y);

    return 0;
}
