#include <stdio.h>
 
int main()
{
  int n, first = 0, second = 1, next,i;
  scanf("%d", &n);
 
  for (i=1; c<=n; c++)
  {
    if (i<=1)
      next=c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d ", next);
  }
 
  return 0;
}