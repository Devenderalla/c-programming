//write a programe to find the largest of three numbers.//
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the num");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b) && (a>c))
	{
		printf("enter the largesst of three num %d",a);
	}
	else if((b>c)&&(b>a))
	{
		printf("enter the largest of three num %d",b);
	}
	else
	{
		printf("enter the largest of three num %d",c);
	}
}
