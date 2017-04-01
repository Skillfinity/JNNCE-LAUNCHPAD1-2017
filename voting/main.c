#include <stdio.h>

int main()
{
    int N;
    printf("enter the age of the candidate\n");
    scanf("%d",&N);
    if(N>=18)
    {
        printf("eligible to vote\n");
    }
        else
    {
        printf("not eligible to vote\n");
    }
    return 0;
}
