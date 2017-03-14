#include <stdio.h>

int main()
{
    float x,y;
    printf("Enter the two numbers for comparision\n");
    scanf("%f %f",&x,&y);

    if(x>y)
        printf("%f is greater than %f\n",x,y);

    else if(x<y)
        printf("%f is lesser than %f\n",x,y);
    else
        printf("%f is equal to %f",x,y);
    return 0;
}
