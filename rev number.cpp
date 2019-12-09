#include<stdio.h>
main()
{
	int n,r;
	printf("\n enter value");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
}
