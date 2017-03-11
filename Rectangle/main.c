#include <stdio.h>
#include <math.h>

int main()
{
    float len,brdt,perimeter,diag;
    printf("Enter the length of the rectangle\n");
    scanf("%f",&len);

    printf("Enter the length of the breadth\n");
    scanf("%f",&brdt);

    perimeter = 2*(len+brdt);
    diag = sqrt((len*len)+(brdt*brdt));

    printf("perimeter of rectangle is = %f",perimeter);
    printf("diagonal of rectangle is=%f",diag);


    return 0;
}
