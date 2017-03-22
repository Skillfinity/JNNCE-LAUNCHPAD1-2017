#include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b;

    printf("Enter the value of a \n");
    scanf("%d",&a);
    printf("Enter the value of b \n");
    scanf("%d",&b);

    if(a>b)
        printf("%d is greater than %d\n",a,b);
    else if(a<b)
        printf("%d is lss than %d\n",a,b);
    else
        printf("%d is equal to %d\n",a,b);

    return 0;
}
