#include <stdio.h>
#include<string.h>
int main()
{
    int num, count=0;
    scanf("%d",&num);
    if(num==0)
    {
        count = 1;
    }
    else{
    while(num !=0)
    {
        count++;
        num=num/10;
    }
    }
printf("%d",count);
        
}