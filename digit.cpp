# include<stdio.h>
main()
{
	int a;
	printf("\n enter a number");
	scanf("%d",&a);
	if(a>=0 && a<9)
    	printf("\n one digit");
	else if(a<100)
	    printf("\n two digit");
	else if(a<1000)
	    printf("\n three digit");
}

