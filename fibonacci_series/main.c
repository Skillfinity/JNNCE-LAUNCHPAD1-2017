#include <stdio.h>

int main()
{
   int n,first=0,second=1,c,next;
   printf("enter the number of terms\n");
   scanf("%d",&n);

   printf("first %d terms of fibonacci series are: \n",n);

   for(c=0;c<=n;c++)
   {
       if(c<=1)
           next=c;
       else
       {
           next=first+second;
           first=second;
           second=next;
       }
       printf("%d",next);
   }

    return 0;
}
