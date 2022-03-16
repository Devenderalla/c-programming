//To caliculate sum and average of 'n' natural number by using for loop.//
#include<stdio.h>
int main()
{
	int a,i,s=0,avg;
	printf("enter the num");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		s+=i;
	}
		printf("\n %d",s);
	avg=s/a;
	printf("\n%d",avg);
	}

