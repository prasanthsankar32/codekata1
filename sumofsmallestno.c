#include <stdio.h>
int main()
{
int a[20],b[20],i,j,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                sum=sum+a[j];
            }
            else
            {
                continue;
            }
        }
    }
    printf("%d",sum);
 }
