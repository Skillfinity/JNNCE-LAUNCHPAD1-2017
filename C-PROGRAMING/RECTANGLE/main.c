#include <stdio.h>
#include<math.h>

int main()
{
    int length,breadth,area,perimeter,diagonal;

    printf("enter the value of length\n");
    scanf("%d",&length);

    printf("enter the value of breadth\n");
    scanf("%d",&breadth);

    area=length*breadth;

    perimeter=2*(length+breadth);

    diagonal=sqrt((length*length)+(breadth*breadth));



    printf("the values of area,perimeter and diagonal are \n : area=%d\n  perimeter=%d \n diagonal=%d\n",area,perimeter,diagonal);

    return 0;
}

