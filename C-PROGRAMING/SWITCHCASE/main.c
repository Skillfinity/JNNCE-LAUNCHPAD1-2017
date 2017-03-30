#include <stdio.h>
#include<math.h>


int main()
{

    int x,y;

    int res;
   char choice=0;


   printf("enter the choice charecter (a,s,d,m): \n");
   scanf("%s",&choice);

    printf("enter the value for X and Y\n");
    scanf("%d %d",&x,&y);

    switch(choice)
    {
        case'a':
        res = x+y;
        printf("additon of two num is : %d \n",res);
        break;

    case's':
        if(x>y)
            res=x-y;
        else
           res=y-x;

        printf("subtraction of two num is :%d \n",res);
        break;

    case'd':
            res=x/y;
        printf("division of two num is :%d \n",res);
        break;

    case'm':
        res=x*y;
        printf("multiplication of two numbers is :%d \n",res);
        break;

    default :
        printf("ERROR !\n");
        break;

    }

return 0;

}
