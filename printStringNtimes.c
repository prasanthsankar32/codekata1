#include <stdio.h>
int main()
{
  char str[100];
  int k,i;

  scanf("%s %d",&str, &k);
  for(i=0;i<k;i++)
  {
    printf("%s\n",str);
  }
}