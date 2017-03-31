#include <stdio.h>

int main()
{


    int percent;
    printf("PLEASE ENTER YOUR PERCENTAGE\n");
    scanf("%d",&percent);

    if(percent>=85)
        printf("congragulations! you have got distinction\n");
    else if (percent>=65 && percent<85)
        printf("congragulations! you have got firstclass\n");
    else if (percent>=35 && percent<65)
        printf("you have got secondclass\n");
    else
        printf("sorry!! you have failed\n");
    return 0;
}
