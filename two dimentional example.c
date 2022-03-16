//two dimentional array.//
#include<stdio.h>
int main()
{
	int matrix[4][3],i,j;
	for(i=0;i<4;i++)
    {
	for(j=0;j<3;j++)
	{
		printf("enter the number");
		scanf("%d",&matrix[i][j]);
	}
    }
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
{
			printf("%d\t",matrix[i][j]);
	}
	printf("\n");
}
return 0;
}

