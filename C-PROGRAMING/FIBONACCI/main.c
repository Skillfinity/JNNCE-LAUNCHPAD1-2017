#include <stdio.h>

int main()
{
   int x,term1=0,term2=1,nextterm;

   printf("enter the number for x\n");
   scanf("%d",&x);

   printf("\nFIBONACCI series between 0 and %d are\n",x);
   printf("%d\n%d\n",term1,term2);

   nextterm = term1 + term2;


   while(nextterm<=x)
   {
       printf("%d\n",nextterm);

       term1=term2;
       term2=nextterm;
       nextterm=term1+term2;
   }


    return 0;
}
