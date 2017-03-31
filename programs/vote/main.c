#include <stdio.h>

int main()
{
    while(1)
    {
    int age;

    printf("Enter the age in years\n");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Eligible to vote\n");
    }
    else
    {
        printf("Not eligible to vote\n");
    }
    }
    return 0;

}
