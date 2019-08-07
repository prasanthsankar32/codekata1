#include <stdio.h>
#include<string.h>
int main()
{
    int a[100],i , n, min=0, max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("%d ",min);
    
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d",max);
}