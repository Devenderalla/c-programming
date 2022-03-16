//Write a c programe to check whether a given number is even or not using fun.//
#include<stdio.h>
int even(int a);
int main()
{
	int a,b;
	printf("enter the number");
	scanf("%d",&a);
	b=even(a);
	printf("\n the b value is %d",b);	
}
int even(int a)
{
	if(a%2==0)
	{
	printf("it is even num");
	}
	else
	printf("it is not even");
	return a/2;
}


