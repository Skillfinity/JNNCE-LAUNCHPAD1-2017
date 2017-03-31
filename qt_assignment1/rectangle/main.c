#include <stdio.h>
#include<math.h>

int main()
{

    float length, width, area,perimeter ,diagonal_length;
    printf("Enter length of Rectangle\n");
    scanf("%f", &length);
    printf("Enter width of Rectangle\n");
    scanf("%f", &width);

    area = length * width;
    printf("Area of Rectangle is : %f\n", area);

    perimeter = 2*(length + width);
    printf("Perimeter of Rectangle is: %f\n", perimeter);

    diagonal_length = sqrt(width*width + length*length);
    printf("the diagonal length of rectangle is:%f\n",diagonal_length);


    return 0;
}
