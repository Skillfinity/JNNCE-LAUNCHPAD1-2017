#include <stdio.h>
#include<conio.h>

int main()
{
    int v,i,r,choice,res;

    printf("enter the choice of operation as 1 for voltage, 2 for resistance, 3 for current\n");
    scanf("%d",&choice);

    switch(choice)
    {
           case 1:
           printf("enter the value for current in amperes\n");
           scanf("%d",&i);

           printf("enter the value for resistance in ohms\n");
           scanf("%d",&r);

           res= (i*r);

           printf("the vale of voltage is %d\n",res);
           break;

           case 2:
           printf("enter the value for current in amperes\n");
           scanf("%d",&i);

           printf("enter the value for voltage in volts\n");
           scanf("%d",&v);

           res= (v/i);

           printf("the vale of resistance is %d\n",res);
           break;

           case 3:
           printf("enter the value for voltage in volts\n");
           scanf("%d",&v);

           printf("enter the value for resistance in ohms\n");
           scanf("%d",&r);

           res= (v/r);

           printf("the vale of current is %d\n",res);
           break;


           default:
           printf("invalid entry !!\n");
           break;

    }

    return 0;
}
