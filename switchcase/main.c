#include <stdio.h>

int main()
{


    float a,b,c;
    char calsi;

       printf("enter the value of a and b\n");
       scanf("%f %f",&a,&b);

       printf("press a for addition, s for subtraction,m for multiplication and d for divison\n");
       scanf("%c",&calsi);

    switch(calsi)
    {
    case 'a':
              c=a+b;
              printf("%f+%f=%f\n",a,b,c);
    break;
    case 's':
              c=a-b;
              printf("%f-%f=%f\n",a,b,c);
    break;
    case 'm':
              c=a*b;
              printf("%f*%f=%f\n",a,b,c);
    break;
    case 'd':
              c=a/b;
              printf("%f/%f=%f\n",a,b,c);
    break;
    default:
        printf("error");
        break;



}

    return 0;
}
