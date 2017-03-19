#include <stdio.h>
#include<float.h>
#include<math.h>
int main()
{
    float length, width, area, perimeter, diagonal;

    printf("enter the length of rectangle\n");
    scanf("%f", &length);
    printf("enter the width of rectangle\n");
    scanf("%f", &width);

    area= length*width;
    perimeter=2*(length+width);
    diagonal=sqrt(length*length+width*width);

    printf("the area of rectangle is: %f\n", area);
    printf("the perimeter of rectangle is: %f\n", perimeter);
    printf("the length of diagonal of rectangle is: %f\n", diagonal);

    return 0;
}

