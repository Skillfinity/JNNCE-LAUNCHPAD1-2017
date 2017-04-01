#include <stdio.h>

int main()
{

    int a=0;
    int b=0;
    printf("enter the value of a is=%d\n",a);
    scanf("%d",&a);

    printf("enter the value of b is=%d\n",b);
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n\n after swaping\n\n\n");

    printf("the value of a is=%d\n",a);
    printf("the value of b is=%d\n",b);

    return 0;
}
