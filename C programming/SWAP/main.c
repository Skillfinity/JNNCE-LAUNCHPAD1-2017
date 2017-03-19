#include <stdio.h>

int main()
{
    int a,b;

    printf("enter the first variable\n");
    scanf("%d",&a);
    printf("a = %d\n",a);

    printf("enter the second variable\n");
    scanf("%d",&b);
    printf("b = %d\n",b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("swapped variables are\n a = %d and b = %d",a,b);

    return 0;
}
