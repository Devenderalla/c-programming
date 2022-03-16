//write a programe to test wether number enter positive or neitive or equal to zero.//
#include<stdio.h>
int main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a>0)
	{
		printf("positive");
	}
	else if(a<0)
	{
		printf("negitive");
	}
	else
	{
		printf("zero");
	}
}
