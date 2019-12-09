#include<stdio.h>
main()
{
	int a,n;
	printf("\n enter value");
	scanf("%d",&n);
	a=1;
	while(a<=20)
	{
		printf("\n %d*%d=%d",n,a,a*n);
		a++;
	}
}
