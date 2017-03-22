#include <stdio.h>

int main()
{
    while(1)
    {
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18)
        printf("you are eligible for vote\n");
    else
        printf("you are not eligible for vote\n");
    }
    return 0;
}
