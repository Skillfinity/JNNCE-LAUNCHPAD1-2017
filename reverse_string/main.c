#include <stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    char c[10],R[10],temp;
    int i=0,j;
    printf("enter any letters to reverse:\n");
    scanf("%s",&c);
    j=strlen(c)-1;
    while(i<j)
    {
     temp=c[i];
     c[i]=c[j];
     c[j]=temp;

      i++;
      j--;

    }
    printf("reversed string:%s",c);
    return 0;
}
