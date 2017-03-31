#include <stdio.h>

int main()
{
    while(1)
    {
    int a,b;

    printf("Enter the two numbers\n");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        printf("a greater than b\n");
    }
    else if(a<b)
    {
        printf("a less than b\n");

    }
    else
    {
        printf("a equal to b\n");
    }
}
    return 0;
}
