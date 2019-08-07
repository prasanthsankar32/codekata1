#include <stdio.h>
#include<string.h>
int main()
{
    int i;
    scanf("%d",&i);
    if((i%2==1) && (i != 1))
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
}

