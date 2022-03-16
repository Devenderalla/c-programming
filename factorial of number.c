// write a programe to find factorial of a number using function.//
#include<stdio.h>
int fac(int);
int main()
{
	int a,k;
	printf("enter the number");
	scanf("%d",&a);
	k=fac(a);
	printf("the fac number is %d",k);
	return 0;
}
 int fac(int a)
 {
 int i,k=1;
 
 for (i=1;i<=a;i++)
{
	k=k*i;
}
return k;
}

