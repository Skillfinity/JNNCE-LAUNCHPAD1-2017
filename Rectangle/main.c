#include <stdio.h>
#include <conio.h>

int main()
{
    float area,l,w,perimeter,dialength;
    printf("Enter the values of length and width\n");
    scanf("%f %f",&l,&w);

    area=l*w;
    perimeter=2*(l+w);
    dialength=sqrt((l*l)+(w*w));

    printf("Area=%f\n",area);
    printf("Perimeter=%f\n",perimeter);
    printf("Diagonal length=%f\n",dialength);

    return 0;
}
