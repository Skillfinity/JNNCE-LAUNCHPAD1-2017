#include <stdio.h>
#include<math.h>

int main()
{
    while(1)
    {
        char alphabet;
        int a,b,c;

        printf("Enter the numbers a and b and alphabet\n");
        scanf("%d %d %c",&a,&b,&alphabet);



        switch(alphabet)
        {
        case 'a':
         c=a+b;
         printf("The sum of a and b is=%d\n",c);
            break;


        case 's':
         c=a-b;
         printf("The difference of a and b is=%d\n",c);
            break;

        case 'm':
         c=a*b;
         printf("The product of a and b is=%d\n",c);
            break;

        case 'd':
         c=a/b;
         printf("The division of a and b is=%d\n",c);
            break;

        default:
            printf("Error\n");
        }
    }


    return 0;
}
