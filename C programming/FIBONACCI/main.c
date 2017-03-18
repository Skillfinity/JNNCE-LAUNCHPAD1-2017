#include <stdio.h>

int main()
{
    int x,num1=0,num2=1;
    int z;
    printf("Enter the limit x\n");
    scanf("%d",&x);
    printf("1\n");

    while(z<=x)
    {
        z=num1+num2;
        if(z>x)
            continue;
        printf("%d\n",z);
        num1=num2;
        num2=z;
    }
    return 0;
}
