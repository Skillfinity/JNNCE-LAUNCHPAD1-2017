#include <stdio.h>

int main()
{
    while(1)
    {
    int x,y;
    printf("enter the two numbers to compare");
    scanf("%d %d",&x,&y);
    if(x>y)
      printf("x is greater than y\n");
    else if(x==y)
      printf("x is equal to y\n");
    else
      printf("x is less than y\n");

    }
    return 0;
}
