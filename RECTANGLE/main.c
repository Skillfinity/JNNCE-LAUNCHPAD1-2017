#include<stdio.h>
#include<math.h>

int main()
{
    int area,p;
    float diagonal;
    int l,b;
    printf("Enter length value\n");
    scanf("%d",&l);
    printf("Enter breadth value\n");
    scanf("%d",&b);
    area=l*b;
    p=2*l+2*b;
    diagonal=sqrt(l*l+b*b);
    printf("area=%d,p=%d,diagonal=%f",area,p,diagonal);
    return 0;
}
