#include <stdio.h>

int main()
{
    float percent;

    printf("enter the percentage \n");
   scanf("%f",&percent);


    if(percent >= 85 && percent<100)
         printf("distinction\n");


   else if (percent >=60 && percent<85)
        printf("first class\n");

    else if(percent >=35 && percent<60)
        printf("second class\n");

    else if(percent>=0 && percent<35)
        printf("failed\n");

    else
        printf("error !!!\n");

    return 0;
}

