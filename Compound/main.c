#include <stdio.h>

int main()
{
   float P,n,R,CI;
   printf("Enter the principle amount\n");
   scanf("%f",&P);
   printf("Enter the number of years\n");
   scanf("%f",&n);
   printf("Enter the rate of interest\n");
   scanf("%f",&R);
   CI=P*pow((1+(R/100)),n);
   printf("Compound interest is %f\n",CI);
}
