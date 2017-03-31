#include <stdio.h>

int main()
{
    char string[20];
    char rstring[20];
    int i,k;
    int LoS;
    printf("Enter the string to be reversed\n");
    scanf("%[^\t\n]s",string);
    printf("%s",string);


    for(i = 0; string[i] != '\0'; ++i);
    {
        printf("Length of string: %d\n", i);
    }

    LoS=i-1;
    k=LoS;

    for(i=0;i<=LoS;i++)
    {
        rstring[i]=string[k];
        k=k-1;
    }
    for(i=0;i<=LoS;i++)
    {
        printf("%c",rstring[i]);
    }




    return 0;
}
