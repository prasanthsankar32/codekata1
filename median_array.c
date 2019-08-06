#include <stdio.h>
int main()
{
    int i,j,n,temp,a[100],median;
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
 if( n%2 == 0)                                                                  
  median = (a[(n/2)-1]+a[(n/2)])/2;                                           
 else                                                                           
  median = a[(n/2)];
    printf("\n%d", median);                                            
 
}