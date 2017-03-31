#include <stdio.h>

int main()
{
    float d,x,y;
    float t;

    printf("Enter the speed of Bike A in Kmph\n");
    scanf("%f",&x);

    printf("Enter the speed of Bike B in Kmph\n");
    scanf("%f",&y);




    if(x<y)
    {
        printf("A wont catch B at this speed!!\n");
    }
    else
    {
        printf("Enter the Distance between them in Km\n");
        scanf("%f",&d);
        t=d/(x-y);
        printf("Bike A will catch B in %f minutes\n",(t*60));
    }
    return 0;
}
