//WACP fibonocci series using function.//
#include<stdio.h>
int fibonocci(int n)
{
	int a=0,b=1,i,c;
	printf("\n%d %d ",a,b);
	for(i=2; i<n; i++)
	{	
	    c=a+b;
	    printf("%d ",c);
		a=b;
		b=c;
	}
}
int main()
{
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	fibonocci(n);
	return 0;
}

