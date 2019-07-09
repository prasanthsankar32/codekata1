#include <stdio.h>
int main()
{
	int rev=0,sum=0,num,t,r;
	scanf("%d",&num);
	while(num != 0)
	{
		r=num%10;
		num=num/10;
		sum=sum+r;
	}
	t=sum;
	while(t != 0)
	{
	    rev=rev*10;
	    rev=rev+t%10;
	    t=t/10;
	}
	if(sum==rev)
	{
	    printf("palindrome");
	}
	else
	{
	    printf("not palindrome");
	}
	 
}
