#include <stdio.h>
#include<math.h>
#include<float.h>

int main()
{
    int x,y;
    char z=0;

    printf("Enter an arithemetic operator\n");
    scanf("%s",&z);

    printf("enter the two numbers\n");
    scanf("%d %d",&x,&y);

    switch(z)
    {
    case 'm':
        printf("multiplication result is %d\n", (x*y));
        break;
    case 'd':
        printf("division result is %d\n", (x/y));
        break;
    case 'a':
        printf("addition result is %d\n", x+y);
        break;
    case 's':
        printf("subtraction result is %d\n", x-y);
        break;

    default:
        printf("error\n");
        break;
    }
return 0;
}


