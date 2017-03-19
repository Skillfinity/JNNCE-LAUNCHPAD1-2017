#include <stdio.h>

int main()
{
    while(1)
    {
    float a,b,c;
    char ch;
    printf("enter two numbers to calculate:\n");
    scanf("%f %f",&a,&b);
    printf("MENU\n a=additon\n s=subtraction\n m=multiplication\n d=division\n" );
    printf("enter your choice:\n");
    scanf("%s",&ch);

    switch(ch)
       {
    case 'a':
        c=a+b;
        break;
    case's':
        c=a-b;
        break;
     case'm':
        c=a*b;
        break;
    case 'd':
        c=a/b;
        break;
    }
    printf("result is %f\n",c);
    }

    return 0;
}
