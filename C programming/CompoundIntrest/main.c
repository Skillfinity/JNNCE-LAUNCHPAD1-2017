#include <stdio.h>

int main()
{
    float p,r;
    int t;

    printf("Enter the principle amount\n");
    scanf("%f",&p);

    printf("Enter the rate of intrest per annum\n");
    scanf("%f",&r);
    r=r/100;

    printf("Enter the time period in years\n");
    scanf("%d",&t);


    printf("The compount interset amount after %d years is %f",t,(p*(pow((1+r),t))-p));

    return 0;
}
