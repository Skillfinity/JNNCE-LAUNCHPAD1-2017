#include <stdio.h>

int main()
{
    int a,i=1;
    printf("enter a num untill you want odd nums:");
    scanf("%d",&a);
    while(i<a)
    {printf("%d\n",i);
        i=i+2;
    }
    return 0;
}
