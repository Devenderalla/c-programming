//sum of series 1/1seq+1/2seq+1/3seq+-----+1/nseq//
#include<stdio.h>
#include<math.h>
int main()
{
	float a,i,s=0;
	printf("enter the length");
	scanf("%f",&a);
	for (i=1;i<=a;i++)
	{
		s=s+(1/pow(i,2));
	}
	printf("%f",s);
}
