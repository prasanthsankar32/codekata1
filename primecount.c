#include <stdio.h>
int main()
{
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
       int flag = 1;
        for(int divisor = 2; divisor <= i/2; divisor++)
        {
            if(i%divisor==0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
