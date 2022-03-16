//write a programe to enter any charector if the charector in lower case then converted in to upper case.//
#include<stdio.h>
int main()
{
    char a,d;
    printf("enter the value");
	scanf("%c",&a);
	if((a>='a')&&(a<='z'))
	{
	d=a-32;
	printf("%c",d);
	}
	else if((a>='A')&&(a<='Z'))	
	{
	d=a+32;
	printf("%c",d);
	}
	else
	printf("its not a alphabet");
}
