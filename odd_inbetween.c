#include <stdio.h>
int main()
{
    int i,m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    for (i=m+1;i<n;i++)
    {
        if (i%2!=0)
        printf("%d ",i);
    }
}