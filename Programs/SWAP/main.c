#include <stdio.h>

int main()
{
    while(1)
    {
        int a,b;
        printf("Enter the value of a and b\n");
        scanf("%d %d",&a,&b);

        a=a+b;
        b=a-b;
        a=a-b;

        printf("The swapped values are a=%d and b=%d\n",a,b);

    }

    return 0;
}
