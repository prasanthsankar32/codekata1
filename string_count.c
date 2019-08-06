#include<conio.h>
#include<stdio.h>
int main()
{
 int i,count=0;
 char str[20];
gets(str);
 for(i=0; str[i]!=NULL; i++)
 {
    count++;
    if(str[i]==' ')
    count--;
 
 }
 printf("%d",count);
return 0;
}