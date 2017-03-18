#include <stdio.h>

int main()
{
    int x,i;
    printf("Enter the limit x\n");
    scanf("%d",&x);

    for(i=0;i<=x;i++)
    {
        if((i%2) == 0)
            continue;
        printf("%d\n",i);

    }
    return 0;
}
