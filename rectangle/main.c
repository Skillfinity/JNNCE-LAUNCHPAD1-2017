#include <stdio.h>
#include <math.h>
int main()
{
    int l,b,area,perimeter;
    float ld;

    printf("enter the length and breadth of the rectangle\n");
    scanf("%d %d",&l,&b);
    printf("area of rect is\n");
    area=l*b;
    printf("%d\n",area);

    printf("perimeter of rect is\n");
    perimeter=2*(l+b);
    printf("%d\n",perimeter);
    printf("length of diagonal of rect is\n");
    ld=sqrt((l*l)+(b*b));
    printf("%f\n",ld);




    return 0;
}
