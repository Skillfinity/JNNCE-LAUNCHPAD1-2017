#include <stdio.h>

int main()
{

    int x,y =0;

    printf("enter the value for x\n");
    scanf("%d",&x);

    printf("enter the valur for y\n");
    scanf("%d",&y);

    if(x>y)
        printf("value of X is greater than value of Y\n ");

    else if(x<y)
        printf("value of X is lesser than value of Y\n");

    else
        printf("value of X is equal to value of Y\n");
    return 0;
}
