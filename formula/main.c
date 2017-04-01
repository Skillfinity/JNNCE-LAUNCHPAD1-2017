/*Write a C program to prove (a + b)2 = a2 + b2 + 2ab and (a - b)2 = a2 + b2 -2ab.

Create a Qt project called Formula, write your program,
run and then submit all the Qt files created for this project for evaluation.*/

#include <stdio.h>

int main()
{
    int a,b,r11,r12,r21,r22;
    printf("enter two numbers\n",a,b);
    scanf("%d %d",&a,&b);

    r11=(a+b)*(a+b);
    r12=a*a+b*b+2*a*b;

    if(r11==r12)
    {
        printf("r11=(a+b)*(a+b)=%d\n",r11);
        printf("r12=a*a+b*b+2*a*b=%d\n",r12);

        printf("\n hence (a+b)^2=a^2+b^2+2ab\n");

    }


    r21=(a-b)*(a-b);
    r22=a*a+b*b-2*a*b;

    if(r21==r22)
    {
        printf(" \n r21=(a-b)*(a-b)=%d\n",r21);
        printf(" r22=a*a+b*b-2*a*b=%d\n",r22);
        printf("\n hence (a-b)^2=a^2+b^2-2ab\n");
    }


    return 0;
}
