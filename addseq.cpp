#include<stdio.h>
main()
{
	int n,r,sum=0;
	printf("\n enter value");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("\n sum of digits : %d",sum);
}
