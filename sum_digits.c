#include <stdio.h>
#include<string.h>
int main()
{
    int i,sum=0;
    scanf("%d",&i);
    while(i!=0)
    {
        sum=sum+(i%10);
        i=i/10;
    }
    printf("%d",sum);
    }
