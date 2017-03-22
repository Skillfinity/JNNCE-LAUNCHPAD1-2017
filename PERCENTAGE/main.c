#include <stdio.h>

int main(int argc, char *argv[])
{
    float per;
    printf("Enter your percentage of marks\n");
    scanf("%f",&per);

    if(per >= 70)
        printf("Congratulations! Your result is Distinction\n");
    else if(per >= 55 && per <70)
        printf("Congratulations! Your result is First Class\n");
    else if(per >= 35 && per < 55)
        printf("Congratulations! Your result is Second class\n");
    else
        printf("Sorry! You Failed in the exam\n");
    return 0;
}
