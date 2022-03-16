#include<stdio.h>
int main()
{
	int a;
	printf("enter the salary");
	scanf("%d",&a);
	if(a<=150000)
	{ 
	printf("no tax");
	}
	else if((a>=150001)&&(a<=300000))
	{
		printf("tax: %d",a*10/100);
	}
	else if((a>=300001)&&(a<500000))
	{
		printf("tax: %d",a*20/100);
	}
	else 
	{
		printf("tax: %d",a*30/100);
	}
}
