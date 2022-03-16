//write a programe to print n natural numbers.//
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter n value: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
}
