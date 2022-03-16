//write a c programe to read six subjects marks and calclute the average and display the grade.//
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,avg;
	printf("enter the marks");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	avg=(a+b+c+d+e+f)/6;
	printf("the average is %d",avg);
	if (avg>=91)
	{
	printf("grade is O");
}
	else if (avg>=81)
{
		printf("grade is A+");
}	
    else if(avg>=71)
{
        printf("grade is A");
	}
	else if(avg>=61)
{
		printf("grade is B+");
	}
	else if(avg>=51)
	{
		printf("grade is B");
	}
	else if(avg>=45)
	{
		printf("grade is P");
	}
	else
	{
	printf("grade is F");
    }
}  
	
