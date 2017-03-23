#include <stdio.h>

int main()
{
    int a,b = 0;

    printf("enter the numbers\n");
    scanf("%d %d",&a,&b);

    printf("numbers in a and b before swapping : a=%d b=%d\n \n",a,b);


    //swapping of numbers in a and b //

    a=a+b;
    b=a-b;
    a=a-b;

    printf("result after swapping  : a=%d b=%d\n \n",a,b);

return 0;
}

