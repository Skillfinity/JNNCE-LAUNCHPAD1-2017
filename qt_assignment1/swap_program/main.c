#include <stdio.h>

int main()
{

    int num1, num2;
    printf("the two numbers are:");
    scanf("%d,%d",&num1,&num2);

    num1= num1+num2;
    num2= num1-num2;
    num1= num1-num2;

    printf("tha numbers after swapping are %d\t%d\n",num1,num2);
    return 0;
}
