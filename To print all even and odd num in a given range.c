//To print all even num and odd num in given range.//
#include<stdio.h>
int main()
{
	int a,b,r,i;
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	printf("display the even numbers between %d and %d ",a,b);
	for(i=a;i<=b;i++)
	{
		r=i%2;
	    if(r==0)
	    printf("\n %d",i);
	}
	
      printf("display the odd numbers between %d and %d ",a,b);
      for(i=a;i<=b;i++)
    {
	    r=i%2;
	    if(r==1)
	    printf("\n %d",i);
    }
}

