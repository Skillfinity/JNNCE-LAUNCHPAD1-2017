#include <stdio.h>

int main(int argc, char *argv[])
{
    int x, y;
    printf("Enter value of x\n");
    scanf("%d",&x);
    printf("Enter value of y\n");
    scanf("%d",&y);

    x=x+y;
    y=x-y;
    x=x-y;
    printf("Swapped values of x and y are %d,%d",x,y);

    return 0;
}
