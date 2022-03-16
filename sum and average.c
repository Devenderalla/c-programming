//WACP on sum and average using arrray.//
#include<stdio.h>
int main()
{
	int marks[100],sum=0,n,i,average;
	printf("Enter the value: ");
	scanf("%d",&n);
	printf("Enter %d values:\n",n);
	
	for(i=0;i<n;i++)
	{
	scanf("%d",&marks[i]);
    }
    for(i=0;i<n;i++)
    {
	printf("%d ",marks[i]);
    }   
    for(i=0;i<n;i++)
    {
	sum=sum+marks[i];
    }
printf("\nsum is %d",sum);
printf("\naverage is %d",sum/n);
}
