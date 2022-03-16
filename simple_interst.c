//write a c programe to print simple intrest using function.//
#include<stdio.h>
int simple(int p ,int t ,int r );
int main()
{
	int p,t,r,si;
	printf("enter the number");
	scanf("%d%d%d",&p,&t,&r);
	si=simple(p,t,r);
	printf("\n the si value is %d",si);
	return 0;
}
    int simple(int p,int t,int r)
    {
    	int si=0;
    si=(p*t*r)/100;
    return (si);
}
