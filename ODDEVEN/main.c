#include <stdio.h>

int main(int argc, char *argv[])
{
    int i=0,num=0;
    printf("Enter the value of num\n");
    scanf("%d",&num);
    printf("Odd numbers between 0 and num are\n");

    while(i<num)
    {

        i=i+1;
        printf("%d\n",i);
        i++;
    }
    return 0;
}
