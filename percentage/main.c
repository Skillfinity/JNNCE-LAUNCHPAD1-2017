#include <stdio.h>

int main()
{
while(1)
{
    float percentage;

    printf("enter the percentage of student\n");
    scanf("%f", &percentage);

    if(percentage>=75)
    {
        printf("distinction\n");
    }
    else if(percentage>=60 && percentage<75)
    {
        printf("first class\n");
    }
    else if(percentage>=35 && percentage<60)
    {
        printf("second class\n");
    }
    else
    {
        printf("fail\n");
    }
}
return 0;
}


