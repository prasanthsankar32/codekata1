#include <stdio.h>
int main()
{
  int m,n,i,temp,sum,r;
  scanf("%d %d", &m, &n);
  for(i=m+1; i<n; ++i)
  {
      temp=i;
      sum=0;
      while(temp>0)
      {
          r=(temp%10);
          sum=sum+(r*r*r);
          temp=temp/10;
      }
      if(i==sum)
      {
          printf("%d ",i);
      }
  }
  return 0;
}   