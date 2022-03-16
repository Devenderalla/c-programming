// WACP swaping of two numbers using temperory varible using function.//
#include<stdio.h>
int swap(int, int);
int main()
{
	int a,b,c;
	printf("enter the num");
	scanf("%d%d",&a,&b);
	c=swap(a,b);
	return 0;	
}
int swap(int a,int b)
{
	int c;
c=a;
a=b;
b=c;
printf("the swap num are %d\n%d",a,b);
return 0;
}

