#include<stdio.h>
void main()
{
	int sum=0,n,r,temp;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	printf("sum=%d",sum);
	if(sum==temp)
	{
		printf("\nit is armstrong");
	}
	else
	{
		printf("\nit is not armstrong");
	}
}
