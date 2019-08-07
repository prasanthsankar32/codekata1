    
#include <stdio.h>
#include<string.h>
int main()
{
    int n1,n2,mul;
    scanf("%d%d",&n1,&n2);
    mul=n1*n2;
    if(mul%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}