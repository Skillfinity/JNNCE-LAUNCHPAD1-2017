#include <stdio.h>

int main()
{
    while(1)
    {
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
{
    if(age>=18)
    {
        printf("Eligible to vote\n");
    }
    else
    {
        printf("Not Eligible to vote\n");
    }
}
}
return 0;
}

