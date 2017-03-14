#include <stdio.h>
#include <math.h>

int main()
{
    float len,brdt,perimeter,diag,area;
    printf("Enter the length of the rectangle\n");
    scanf("%f",&len);

    printf("Enter the breadth of rectangle\n");
    scanf("%f",&brdt);

    area = len*brdt;
    perimeter = 2*(len+brdt);
    diag = sqrt((len*len)+(brdt*brdt));

    printf("area of rectangle is=%f",area);
    printf("perimeter of rectangle is = %f",perimeter);
    printf("diagonal of rectangle is=%f",diag);



    return 0;
}
