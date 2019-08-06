#include<stdio.h>
int main()
{
    int arr[100], len, i, j, temp, n;
        scanf("%d", &len);
        for (i = 0; i < len; i++) 
        {
            scanf("%d", &arr[i]);
        }
    for(i=0;i<len;i++)
 
        printf("\n%d %d", arr[i],i);
        return 0;
}