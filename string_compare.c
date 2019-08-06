#include<stdio.h>
int main()
{
    char str1[50],str2[50];
    int i,len1=0,len2=0,count = 0;

    scanf("%s %s",&str1, &str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1 > len2)
        printf("%s",str1);
        else
        printf("%s",str2);
}