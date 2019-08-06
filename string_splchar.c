#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i=0,count=0;
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] >=33 && str[i]<=47 || str[i] >=58 && str[i]<=64 || str[i] >=123 && str[i]<=126 || str[i]>=91 && str[i] <=96)
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
}
