#include <stdio.h>

int main(int argc, char *argv[])
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age>=18)
        printf("Eligible to vote\n");
    else
        printf("Not eligible to vote\n");

    return 0;
}
