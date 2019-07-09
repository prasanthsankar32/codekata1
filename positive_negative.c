#include<stdio.h>

void main()
{
    int i;
    printf("enter the value");
    scanf("%d",&i);
    if(i>0)
    {
        printf("positive");
    }
    else if(i==0)
    {
        printf("zero");
    }
    else
    {
        printf("negative");
    }
    
}
