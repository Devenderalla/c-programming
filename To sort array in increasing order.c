//To sort an array in ascending order.//
#include<stdio.h>
int main()
{
	int a[20],i,j,n,temp;
	printf("Enter how many numbers: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;	
			}
		}
		
		printf("%d\n",a[i]);
	}
}
