//bonus//
#include<stdio.h>
main()

{
	int a,b,bo;
	char c;
	printf("enter gender ");
	scanf("%c",&c);
	printf("enter salary ");
	scanf("%d",&a);
	b=0;
	
	if (a<10000)
	 b+=2;
 
	if (c== 'm'|| c=='M')
	{
	 b+=5;
	 bo=a*(b/100.0);
	 printf("salary is %d and bonus is %d",a,bo);
    }
	else if (c=='f'|| c=='F')
	{
		b+=10;
		bo=a*(b/100.0);
		printf("salary is %d and bonus is %d",a,bo);
    }
    else
    printf("invalid entry");
}
