#include <stdio.h>

int main()
{
    int option;
    float V, I, R, result;

        printf( "Press 1 to calculate the electric current; "
                "press 2 to calculate the resistance; "
                "press 3 to calculate the voltage\n" );
        scanf( "%d", &option );

        if(option == 1)
        {
            printf( "Enter the voltage in volts:\n" );
            scanf( "%f", &V );

            printf( "Enter the resistance in ohms:\n" );
            scanf( "%f", &R );

            result = V / R;

            printf( "The current is %0.2f amps", result );
         }

         else if(option == 2)
        {
            printf( "Enter the voltage in volts:\n" );
            scanf( "%f", &V );

            printf( "Enter the current in amps:\n" );
            scanf( "%f", &I );

            result = V / I;

            printf( "The resistance is %0.2f ohms.", result );
            }

         else
        {
            printf( "Enter the resistance in ohms:\n" );
            scanf( "%f", &R );

            printf( "Enter the current in amps:\n" );
            scanf( "%f", &I );

            result = I * R;

            printf( "The voltage is %0.2f volts", result );
            }


    return 0;
}
