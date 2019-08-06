#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i=0,count=0;
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] >=48 && str[i]<=57)
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
}