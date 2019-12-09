#include<stdio.h>
#include<stdlib.h>
main()
{
	int n,r,sum=0;
	printf("\n enter your vehicle no:");
	scanf("%d",&n);
	test:
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	if(sum<10)
	printf("\n lucky no:%d",sum);
	else
	{
		n=sum;
		sum=0;
		goto test;
	}

}
