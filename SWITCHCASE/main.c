#include <stdio.h>

int main(int argc, char *argv[])
{
   int x,y,z;

   char choice;
   printf("Enter the value of choice\n");
   scanf("%c",&choice);

   switch(choice)

   {
   case 'a':
   {
       printf("Enter the value of x\n");
       scanf("%d",&x);
       printf("Enter the value of y\n");
       scanf("%d",&y);
       z=x+y;
       printf("Result is %d\n",z);
       break;
   }
   case 's':
  {    printf("Enter the value of x\n");
       scanf("%d",&x);
       printf("Enter the value of y\n");
       scanf("%d",&y);
       z=x-y;
       printf("Result is %d\n",z);
       break;
   }
   case 'd':
   { printf("Enter the value of x\n");
       scanf("%d",&x);
       printf("Enter the value of y\n");
       scanf("%d",&y);
       z=x/y;
       printf("Result is %d\n",z);
       break;
   }
   case 'm':
   { printf("Enter the value of x\n");
       scanf("%d",&x);
       printf("Enter the value of y\n");
       scanf("%d",&y);

       z=x*y;
       printf("Result is %d\n",z);
       break;

   }
   default:
   {
       printf("Please enter valid choice\n");
       break;
   }
   return 0;
}
}
