#include <stdio.h>

int main()
{
    int percentage;

    printf("Enter the percentage\n");
    scanf("%d",&percentage);

    if(percentage>=70)
        printf("Distinction\n");
    else if(percentage<70 && percentage>50)
        printf("First class\n");
    else if(percentage<=50 && percentage>35)
        printf("Second class\n");
    else
        printf("Fail\n");

    return 0;
}
