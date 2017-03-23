#include <stdio.h>

int main()
{

    int age=0;

    printf("enter the age of person\n");
    scanf("%d",&age);


    if(age >= 18)

        printf("person is eligible for voting\n");

    else

        printf("person is not eligilble for voting\n");


    return 0;



}
