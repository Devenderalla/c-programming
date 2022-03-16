//write a programe to print prime num upto a given num.//
#include<stdio.h>
int main()
{
	int a=2,b,i,k;
	printf("enter number");
	scanf("%d",&b);
	for(a=2;a<=b;a++)
	{
		k=0;
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			k++;
		}
		
		if(k==0)
		printf("\n%d",a);
	}
}
