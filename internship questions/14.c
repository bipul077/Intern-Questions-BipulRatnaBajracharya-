#include<stdio.h>
void main()
{
	int a[5],large,i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
		for(i=1;i<5;i++)
		{
			if(a[i]>large)
			{
				large=a[i];
			}
		}
	printf("the greatest is %d",large);
}
