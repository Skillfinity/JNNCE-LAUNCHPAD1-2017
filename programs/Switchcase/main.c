#include <stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    while(1)
    {
    int num1,num2,num3;

    char alphabet;

    printf("Enter the number1,number2,alphabet\n");
    scanf("%d %d %c",&num1, &num2 ,&alphabet);



    switch(alphabet)
    {
    case 'a':
        num3=num1+num2;
        printf("Sum of numbers= %d\n",num3);
  break;

    case 's':
        num3=num1-num2;
        printf("Subtraction of numbers= %d\n",num3);
  break;

    case 'm':
        num3=num1*num2;
        printf("Multiplication of numbers= %d\n",num3);
  break;

    case 'd':
        num3=num1/num2;
        printf("Division of numbers= %d\n",num3);
        break;


     default:
       printf("Error\n");


    }
    }

    return 0;
}
