/ a pr/writeograme to find factorial of a number using for loop//
#include<stdio.h>
int main()
{
	int b=1,a,i;
	printf("enter the number");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	printf("%d",b);
}
