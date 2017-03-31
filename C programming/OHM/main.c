#include <stdio.h>

int main()
{
    int volts=0;
    int ampere=0;
    int ohms=0;
    int flag;

    printf("press 1 to calculate voltage\n");
    printf("press 2 to calculate current\n");
    printf("press 3 to calculate resistance\n");
    scanf("%d",&flag);


    switch(flag)
    {
    case 1:
        printf("Enter the 2 parameters\n");
        scanf("%d %d",&ampere,&ohms);
        volts = ampere*ohms;
        printf("voltage = %d volts",volts);
        break;
    case 2:
        printf("Enter the 2 parameters\n");
        scanf("%d %d",&volts,&ohms);
        ampere=volts/ohms;
        printf("current = %d ampere",ampere);
        break;
    case 3:
        printf("Enter the 2 parameters\n");
        scanf("%d %d",&volts,&ampere);
        ohms=volts/ampere;
        printf("resistance = %d ohms",ohms);
        break;
    default:
        break;
    }

}
