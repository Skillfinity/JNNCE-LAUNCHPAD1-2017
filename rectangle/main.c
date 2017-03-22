#include <stdio.h>
#include<math.h>

int main()
{   int a,b,area,perimeter;
    float dia_length;
    printf("enter the length and breadth of rectangle\n");
    scanf("%d %d",&a,&b);
    area=a*b;
    perimeter= 2*(a+b);
    dia_length=sqrt(a*a+b*b);
    printf("area, perimeter and length of rectangle is %d,%d,%f respectively\n",area,perimeter,dia_length);
    return 0;
}
