#include <stdio.h>

int main()
{
int N;
    printf("enter the percentage of the student\n");
    scanf("%d",&N);
    if(N>=85)
    {
    printf("distinction\n");
    }
    else if(N>=65&&N<85)
    {
        printf("first class\n");

    }
    else if(N<65&&N>=35)
    {
        printf("second class\n");

    }
    else

{

    printf("fail\n");
    }


    return 0;
}
