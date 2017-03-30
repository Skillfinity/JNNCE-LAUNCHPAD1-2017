#include <stdio.h>
#include<math.h>
int main()
{
    while(1)
    {
    float length,breadth,area,perimeter,length_of_diagonal;

    printf("Enter the length and breadth of the rectangle\n");
    scanf("%f %f",&length,&breadth);

    area=length*breadth;
    perimeter=2*(length+breadth);
    length_of_diagonal=sqrt(pow(length,2)+pow(breadth,2));

    printf("Area of rectangle is= %f\n", area);
    printf("perimeter of a rectangle is= %f\n", perimeter);
    printf("length of diagonal of rectangle is= %f\n",length_of_diagonal);
}
    return 0;
}
