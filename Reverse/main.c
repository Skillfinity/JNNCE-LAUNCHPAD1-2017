#include <stdio.h>

int main()

{ char str[10],rstr[10];
    int i,j=0;
    printf("Enter the string\n");
    scanf("%s",str);
   for(i=strlen(str)-1;i>=0;i--)
   {
       rstr[j]=str[i];
       j=j+1;
   }
  printf("Reverse string is %s",rstr);

return 0;
}
