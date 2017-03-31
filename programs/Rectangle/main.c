#include <stdio.h>
#include<math.h>
int main()
{
    int l,b,area,perimeter,ld;
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%d %d",&l,&b);
    area=(l*b);
    printf("area=%d\n",area);
    perimeter=2*(l+b);
    printf("perimeter=%d\n",perimeter);
    ld=sqrt(pow(l,2)+pow(b,2));
    printf("length of the diagonal=%d\n",ld);
    return 0;
}
