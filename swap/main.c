#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the value for a and b\n");
    scanf("%d %d",&a, &b);

    printf("number before swapping %d %d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("number after swapping %d %d\n",a,b);
    return 0;
}
