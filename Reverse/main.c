#include <stdio.h>
#include<string.h>

int main()
{

   char str[100], temp;
   int i, j;

   printf("Enter the string :\n");
   scanf("%s",&str);

   i = 0;
   j = strlen(str) - 1;

   while (i < j)
   {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }

   printf("Reversed string is :%s\n", str);

    return 0;
}
