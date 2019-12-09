#include<stdio.h>
#include<ctype.h>
main()
{
	char ch;
	printf("\n enter the character:");
	scanf("%c",&ch);
	ch=tolower(ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':printf("\n vowel");break;
		default:printf("\n consonant");	
	}
	}
