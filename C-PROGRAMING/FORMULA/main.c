#include <stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

    int a,b,x,y,res1,res2;

    printf("enter the values for a and b\n");
    scanf("%d%d",&a,&b);

    x=((a+b)*(a+b));
    printf("the value of (a+b)^2 is %d\n",x);
    y=((a-b)*(a-b));
    printf("the value of (a-b)^2 is %d\n",y);

   res1=((a*a)+(b*b)+(2*a*b));
    printf("\n \nthe value of (a^2+b^2+2ab) is %d \n",res1);
   res2=((a*a)+(b*b)-(2*a*b));
   printf("the value of (a^2+b^2-2ab) is %d \n",res2);

    if(x==res1 && y==res2)
        printf("\n above formula holds good\n");

    return 0;
}
