/*Ask the user to enter his percentage. Display on console,
if the user has got distinction or first class or second class or failed.

Create a Qt project called PERCENTAGE, write your program,
run and then submit all the Qt files created for this project for evaluation.#include <stdio.h>*/

int main()
{
    int a;
    printf("enter your percentage\n");
    scanf("%d",&a);

    if(a<35)
         printf("your failed\n");
    else if(a>=35 && a<=65)
         printf("second class\n");
    else if(a>65 && a<=85)
         printf("first class\n");
    else if(a>85 && a<=100)
          printf("distiction\n");
    else
        printf("please enter the valid percentage value");

    return 0;
}
