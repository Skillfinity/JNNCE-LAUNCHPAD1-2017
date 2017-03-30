#include<stdio.h>
#include<limits.h>
#include<float.h>

// printing data types and it's max and min range //

int main()
{
    // defining for integer types//

    printf("bytes occupied by int : %d\n",sizeof(int));
    printf("minimum value of int : %d\n",INT_MIN);
    printf("maximum value of int : %d\n \n",INT_MAX);

    printf("bytes occupied by short : %d\n",sizeof(short));
    printf("minimum value of short : %d\n",SHRT_MIN);
    printf("maximum value of short : %d\n \n",SHRT_MAX);

    printf("bytes occupied by long : %d\n",sizeof(long));
    printf("minimum value of long : %ld\n",LONG_MIN);
    printf("maximum value of long : %ld\n \n",LONG_MAX);

    printf("bytes occupied by unsigned int : %d\n",sizeof(unsigned int));
    printf("maximum value of unsigned int : %d\n \n",UINT_MAX);

    printf("bytes occupied by unsigned short : %d\n",sizeof(unsigned short));
    printf("maximum value of unsigned short : %d\n \n",USHRT_MAX);

    printf("bytes occupied by unsigned long : %d\n",sizeof(unsigned long));
    printf("maximum value of unsigned long : %ld\n \n",ULONG_MAX);

    printf("bytes occupied by signed int : %d\n \n",sizeof(signed int));

    // defining for charecter types //


    printf("bytes occupied by char : %d\n",sizeof(char));
    printf("minimum value of char : %d\n",CHAR_MIN);
    printf("maximum value of char : %d\n \n",CHAR_MAX);



    printf("bytes occupied by unsigned char : %d\n",sizeof(unsigned char));
    printf("maximum value of unsigned char : %d\n \n",UCHAR_MAX);

    printf("bytes occupied by signed char : %d\n",sizeof(signed char));
    printf("minimum value of signrd char : %d\n",SCHAR_MIN);
    printf("maximum value of signed char : %d\n \n",SCHAR_MAX);


    // defining for float type //

    printf("bytes occupied by float : %d\n",sizeof(float));
    printf("minimum value of float : %f\n",-FLT_MAX);
    printf("maximum value of char : %f\n \n",FLT_MAX);

    printf("bytes occupied by double : %d\n",sizeof(double));
    printf("minimum value of double : %f\n",-DBL_MAX);
    printf("maximum value of double : %f\n \n",DBL_MAX);

    printf("bytes occupied by long double : %d\n",sizeof(long double));
    printf("minimum value of long double : %f\n",-LDBL_MAX);
    printf("maximum value of long double : %f\n \n",LDBL_MAX);


return 0;

}
