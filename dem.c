#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,n;
	printf("\n enter no. to stop:");
	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
		printf("\n %d",i);
		if(i==n)
		break;
	}
}
