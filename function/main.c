/*Create an infinitely running program (to be stopped using a flag) to - Add,
Subtract, Multiply, Divide, generate prime numbers between 2 numbers using
functions for each of the operation. Also make use of header and source file structure.
Create different versions of the header and source files for the operations

- version 1 for taking integer inputs

- version 2 for taking floating point inputs

Based on the compiler switch (preprocessor directive for conditional compilation)
the right file shall be included in the final compiled program.

So effectively, if I select the compiler switch PROGRAMFLOAT and compile,
I should be able to provide float values and do specific operations
what is possible for float. if I select the compiler switch PROGRAMINT and compile,
I should be able to provide int values and do specific operations what is possible for int.*/


#include <stdio.h>


int add(int x,int y)
{
    int z=0;
    z=x+y;
    printf("%d+%d=%d\n",x,y,z);

}

int sub(int x,int y)
{
    int z=0;
    z=x-y;
    printf("%d-%d=%d\n",x,y,z);

}

int mul(int x,int y)
{
    int z=0;
    z=x*y;
    printf("%d*%d=%d\n",x,y,z);

}

int div(int x,int y)
{
   int z=0;

    scanf("%d %d",&x,&y);
    z=x/y;
    printf("%d/%d=%d",x,y,z);

}

int prime(int x,int y)
{
    int i,flag;
    printf("prime numbers between %d and %d are: \n",x,y);

    for(i=x+1;i<y;i++)
    {
        flag=checkprime(i);

        if(flag==1)
            printf("%d",i);

    }

    return(0);

}

int checkprime(int n)
{
    int j,flag=1;
    for(j=2;j<=n/2;j++)
    {
        if(n%j==0)
        {
            flag=0;
            break;
        }
    }
}

int main()
{
    int a,b,c;
    printf("enter the to numbers\n",a,b);
    scanf("%d %d",&a,&b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    div(a,b);
    prime(a,b);



    return 0;
}


