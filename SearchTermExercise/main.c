#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool strCompare(char text[10], char strTerm[10])
{
    int i;
    int j;
    int cnt;
    bool flag = true;

    if(strlen(text) < strlen(strTerm))
    {
        return false;
    }
    else
    {
        for(j = 0; j <= (strlen(text) - strlen(strTerm)); j++)
        {
            flag = true;
            cnt = 0;
            for(i = j; i < strlen(text); i++)
            {
                if(cnt < strlen(strTerm))
                {
                    if(text[i] != strTerm[cnt++])
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if(flag)
            {
                break;
            }
        }
        return flag;
    }
}

int main(int argc, char *argv[])
{
    char str[5][10] = {"Spiderman", "Batman", "Superman", "Flash", "Hanuman"};
    int i;
    char searchTerm[10];

    printf("The entries are: \n");
    for(i = 0; i < 5; i++)
    {
        printf("%s\n", str[i]);
    }

    while(1)
    {
        printf("Please enter search term:\n");
        scanf("%s", &searchTerm);

        printf("The matching entries are: \n");
        for(i = 0; i < 5; i++)
        {
            if(strCompare(str[i], searchTerm))
            {
                printf("%s\n", str[i]);
            }
        }
    }
    return 0;
}
