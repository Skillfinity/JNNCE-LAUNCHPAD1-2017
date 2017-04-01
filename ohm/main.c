/*Write a C program for Ohm’s law – ask the user to enter any 2 parameters
of Ohm’s law i.e. Voltage (in volts), Current (in amps), Resistance (in ohms).
Calculate the third parameter and display the result.*/

#include <stdio.h>

int main()
{
    float v,i,r;
    printf("to calculate resistance using ohm's law\n");
    printf("enter the voltage value in volts and current value in amperes\n",v,i);
    scanf("%f %f",&v,&i);

    r=v/i;

    printf("the resistance value is = %f ohm \n",r);
    return 0;
}
