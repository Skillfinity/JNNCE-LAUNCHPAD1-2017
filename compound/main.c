#include <stdio.h>
#include<math.h>

int main()
{
    float p,r,m,n,ci;
    printf("Enter principle amount :\n ");
    scanf("%f",&p);
    printf("Enter  the interest rate: \n");
    scanf("%f",&r);
    printf("Enter the number of commission period:\n");
    scanf("%f",&m);
    printf("Enter the time:\n");
    scanf("%f",&n);

    ci = (p*pow(1 + r/m,(m*n))-p);
    printf("Compound interest is : %f\n",ci);

    return 0;
}
