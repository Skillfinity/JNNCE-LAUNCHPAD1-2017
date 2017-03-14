#include <stdio.h>

int main()
{
    int x,y;
    int result;
    char var = 0;


    printf("Enter\n a for addition\n s for subtraction\n d for division\n m for multiplication\n");
    scanf("%s",&var);

    printf("Enter 2 numbers\n");
    scanf("%d %d",&x,&y);



    switch(var)
    {
    case('a'):

        result = x+y;
        printf("result of addition is %d \n", result);
        break;


    case('s'):
        result=x-y;
        printf("result of subtraction is %d\n",result);
        break;

    case('d'):
        result=x/y;
        printf("result of division is %d\n",result);
        break;

    case('m'):
        result=x*y;
        printf("result of multiplication is %d\n",result);
        break;

    default:
        printf("Enter valid option\n");
        break;
    }

    return 0;
}
