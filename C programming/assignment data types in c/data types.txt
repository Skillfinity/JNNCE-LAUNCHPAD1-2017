#include <stdio.h>
#include <limits.h>
#include<float.h>


int main()
{
    int a;
    short b;
    long c;
    unsigned int d;
    unsigned short e;
    unsigned long f;
    signed int g;
    char h;
    unsigned char i;
    signed char z;
    float j;
    double k;
    long double l;

    // size, minimum value , maximum value of integer

    printf("size of integer is= %d\n",sizeof(a));
    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n", INT_MAX);
    printf("\n");


    printf("size of short is = %d\n",sizeof(b));
    printf("The minimum value of short = %d\n", SHRT_MIN);
    printf("The maximum value of short = %d\n", SHRT_MAX);
    printf("\n");

    printf("size of long is = %d\n",sizeof(c));
    printf("The minimum value of LONG = %ld\n", LONG_MIN);
    printf("The maximum value of LONG = %ld\n", LONG_MAX);
    printf("\n");


    printf("size of unsigned integer is = %d\n",sizeof(d));
    printf("The minimum value of unsigned INT is = 0\n");
    printf("The maximum value of unsigned INT = %d\n", UINT_MAX);
    printf("\n");


    printf("size of unsigned short is = %d\n",sizeof(e));
    printf("The minimum value of unsigned short = 0\n");
    printf("The maximum value of unsigned short = %d\n", USHRT_MAX);
    printf("\n");


    printf("size of unsigned long is = %d\n",sizeof(f));
    printf("The minimum value of LONG = 0\n");
    printf("The maximum value of LONG = %ld\n", LONG_MAX);
    printf("\n");


    printf("size of signed integer is = %d\n",sizeof(g));
    printf("The minimum value of signed INT = %d\n", INT_MIN);
    printf("The maximum value of signed INT = %d\n", INT_MAX);
    printf("\n");

    printf("size of char is = %d\n",sizeof(h));
    printf("The minimum value of CHAR = %d\n", CHAR_MIN);
    printf("The maximum value of CHAR = %d\n", CHAR_MAX);
    printf("\n");


    printf("size of unsigned char is = %d\n",sizeof(i));
    printf("The minimum value of Unsigned CHAR = 0\n" );
    printf("The maximum value of Unsigned CHAR = %d\n", UCHAR_MAX);
    printf("\n");


    printf("size of signed char is = %d\n",sizeof(z));
    printf("The minimum value of Signed CHAR = %d\n", SCHAR_MIN);
    printf("The maximum value of Signed CHAR = %d\n", SCHAR_MAX);
    printf("\n");


    printf("size of float is= %d \n",sizeof(j));
    printf("The minimum value of float = %f\n", FLT_MAX);
    printf("The maximum value of float = %f\n", -FLT_MAX);
    printf("\n");


    printf("size of double is= %d\n",sizeof(k));
    printf("The minimum value of double = %f\n", DBL_MAX );
    printf("The maximum value of double = %f\n", -DBL_MAX );
    printf("\n");


    printf("size of long double is= %d\n",sizeof(l));
    printf("The minimum value of long double = %f\n", DBL_MAX );
    printf("The maximum value of long double = %f\n", -DBL_MAX );
    printf("\n");




    return(0);

}
