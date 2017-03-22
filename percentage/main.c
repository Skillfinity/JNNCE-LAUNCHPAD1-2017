#include <stdio.h>

int main()
{
    while(1)
    {
    float percent;
    printf("enter percentage:");
    scanf("%f",&percent);
    if(percent>=85)
        printf("Distinction\n");
    else if(percent<85 && percent>=65)
        printf("First class\n");
    else if(percent<65 && percent>=35)
       printf("Second class\n");
    else
        printf("Failed\n");
    }

    return 0;
}
