//write a programe to enter a charecter to determine whether it is vovel or not.//
#include<stdio.h>
int main()
{
	char ch;
	printf("enter the alphabet");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("entered alphabet is vovel");
	}
	else
	{
		printf("entered alphabet is consonant");
	}
	}
