//write a c programe to find the largest of three numbers using function.//
#include<stdio.h>
int largest(int ,int , int );
int main()
{
     int a,b,c;	
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("Largest number is: %d\n",largest(a,b,c));
    return 0;	
}

	int largest(int a,int b, int c)
   {
	if(a>b && a>c)
	return a;
	else if(b>a && b>c)
		return b;
	else
		return c;
}
