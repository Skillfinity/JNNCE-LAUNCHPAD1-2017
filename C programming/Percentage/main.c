#include <stdio.h>

int main()
{
    float Percentage;
    printf("Enter your Percentage\n");
    scanf("%f",&Percentage);

    if(Percentage >= 85)
        printf("Congratulations!! you have passed the exam with distinction\n");

    else if(Percentage < 85 && Percentage >=60)
        printf("Congratulations!! you have passed the exam with First class\n");

    else if(Percentage < 60 && Percentage >=35)
        printf("Congratulations!! you have passed the exam with Second class\n");

    else
        printf("I'm sorry you have failed the exams\2n");

    return 0;
}
