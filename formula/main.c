#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,n1,n2,n3,n4;
    printf("enter the two num:\n");
    scanf("%d %d",&a,&b);
    n1=(a+b)*(a+b);
    n2=(a*a+b*b+2*b*a);
    n3=(a-b)*(a-b);
    n4=(a*a+b*b-2*a*b);
    printf("value of n1,n2:%d %d\n",n1,n2);
    printf("value of n3,n4:%d %d\n",n3,n4);
    if(n1==n2 && n3==n4)
    printf("hence we proved\n");

}
