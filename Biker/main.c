#include <stdio.h>

int main()
{
    int X,Y;
    float Time,rel_speed,D;
    printf("Enter the speed of Biker A in kmph \n");
    scanf("%d",&X);

    printf("Enter the speed of Biker B in kmph \n");
    scanf("%d",&Y);

    printf("Enter the distance value in km \n");
    scanf("%f",&D);

    rel_speed=X-Y;
    Time=(D/rel_speed)*60;

    printf("Time taken by biker A to catch biker B is %f minutes \n",Time);
    return 0;
}
