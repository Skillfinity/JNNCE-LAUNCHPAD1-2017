#include <stdio.h>
int res1(int a, int b);
int res2(int a, int b);
int main()
{
   int x=0,y=0;
   printf("Enter the vaue of x\n");
   scanf("%d",&x);
   printf("Enter the value of y\n");
   scanf("%d",&y);

   printf("Result is %d\n", res1(x,y));
   printf("Result is %d\n", res2(x,y));
   return 0;

}
int res1(int a, int b)
{
    int c;
    c=a*a+b*b+2*a*b;
    return c;

}
int res2(int a, int b)
{int c;

    c= a*a+b*b-2*a*b;
    return c;
}
