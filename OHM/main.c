#include <stdio.h>

int main()
{
    float V,I, R;
    printf("Enter the voltage value\n");
    scanf("%f",&V);
    printf("Enter the current value\n");
    scanf("%f",&I);
    R=V/I;
    printf("Resistance is %f=",R);
    return 0;
}
