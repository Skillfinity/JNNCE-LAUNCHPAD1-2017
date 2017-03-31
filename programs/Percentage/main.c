#include <stdio.h>

int main()
{
    while(1)
    {
    float percentage;

    printf("Enter the percentage\n");
    scanf("%f",&percentage);

    if(percentage>=85)
    {
        printf("Distinction\n");
    }
    else if(percentage>=65 && percentage<85)
    {
        printf("First class\n");
    }
    else if(percentage>=35 && percentage<65)
    {
        printf("Second class\n");
    }
    else

    {
        printf("Fail\n");
    }

    }
    return 0;
}
