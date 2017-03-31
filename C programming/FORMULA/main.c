#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;

    printf("The program checks whether a+b whole squred is equal to a squared plus b squared plus 2ab\n");
    printf("Enter 2 integer values\n");
    scanf("%d",&a);
    scanf("%d",&b);

    if(pow((a+b),2)==(pow(a,2)+pow(b,2)+2*a*b))
        printf("The relation is valid\n");
    else
        printf("The result is invalid\n");


    return 0;
}
