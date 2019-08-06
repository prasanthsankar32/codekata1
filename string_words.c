#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i=0, word=0;
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            word++;
        }
        i++;
    }
    printf("%d", word+1);
}