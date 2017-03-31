#include <stdio.h>
#include<math.h>

int main()
{
    float principle,ri,time,ci;

    printf("enter the principle amount\n");
    scanf("%f",&principle);

    printf("enter the time\n");
    scanf("%f",&time);

    printf("enter the rate of interest\n");
    scanf("%f",&ri);

    ci= (principle*(pow((1+ri/100),time)-1));


   printf("the compound interest for given principle amount is %f\n",ci);


    return 0;
}
