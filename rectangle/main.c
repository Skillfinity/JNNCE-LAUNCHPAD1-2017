
/*Write a program to Calculate the Area, Perimeter and length of the diagonal of a RECTANGLE.
Take the required inputs from the user and display the calculated values on the console.*/

#include <stdio.h>
#include <math.h>


int main()

{
    float a,b,area,perimeter,diagonal;
    printf("program to calculate area,perimeter and length of the diagonal of the rectangle\n");

    printf("enter the lenght of the rectangle \n",a);
    scanf("%f",&a);

    printf("enter the breadth of the rectangle \n",b);
    scanf("%f",&b);
    area=a*b;
    perimeter=2*(a+b);
    diagonal=sqrt(a*a+b*b);

    printf("the area of the rectangle= %f\n",area);
    printf("the perimeter of the rectangle= %f\n",perimeter);
    printf("the diagonal of the rectangle= %f\n",diagonal);




    return 0;
}
