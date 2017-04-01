/*Write a program to print the details for the data types -
INTEGER: int, short, long, unsigned int, unsigned short, unsigned long, signed int
CHARACTER: char, unsigned char, signed char
FLOAT: float, double, long double, unsigned float, unsigned double, unsigned long double, signed float

Details to be printed for each data type are:
- Number of bytes occupied in memory
- Minimum value it can take
- Maximum value it can take#include <stdio.h>*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

       printf("\n number of bytes occupied by char=1 byte\n");

       printf("The minimum value of CHAR = %d\n", CHAR_MIN);
       printf("The maximum value of CHAR = %d\n", CHAR_MAX);
       printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
       printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
       printf("The maximum value of UNSIGNED CHAR = %d\n\n\n", UCHAR_MAX);

       printf("\n number of bytes occupied by integers=4 bytes\n");
       printf("The minimum value of INT = %d\n", INT_MIN);
       printf("The maximum value of INT = %d\n", INT_MAX);
       printf("the number of bytes occupied by short int=2 bytes\n");
       printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
       printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);
       printf("the number of bytes occupied by both the long and unsigned int =4 bytes\n");
       printf("The minimum value of LONG = %ld\n", LONG_MIN);
       printf("The maximum value of LONG = %ld\n", LONG_MAX);
       printf("The minimum value of UNSIGNED INT = %ld\n", UINT_MAX);
       printf("The maximum value of UNSIGNED LONG INT = %ld\n", ULONG_MAX);

     //  printf("The maximum value of float = %.10e\n", FLT_MAX);
      // printf("The minimum value of float = %.10e\n", FLT_MIN);

       printf("\n Storage size for float : %d \n", sizeof(float));
        printf("Minimum float positive value: %E\n", FLT_MIN );
        printf("Maximum float positive value: %E\n", FLT_MAX );
        printf("Precision value: %d\n", FLT_DIG );

        printf("the number of bytes occupied by double float=8 bytes\n");
        printf("the maximum vaue of double float=1.7E+308\n");
        printf("the minimum vaue of double float=2.3E-308\n");
        printf("the number of bytes occupied by long double float=10 bytes\n");
        printf("the maximum vaue of long double float=1.1E+4932\n");
        printf("the minimum vaue of long double float=3.4E-4932\n");


    return 0;
}
