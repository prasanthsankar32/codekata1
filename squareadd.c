#include <stdio.h>
int main()
{
	int rev=0,sum=0,num,r;
	scanf("%d",&num);
	while(num != 0)
	{
		r=num%10;
		num=num/10;
		sum =sum + (r*r);
}
printf("%d",sum);
}
