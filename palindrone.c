//WACP palindrone.//
#include<stdio.h>
int main()
{
    int a,r,t=0,rev;
    printf("enter the number");
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        r=a%10;
        rev=(rev*10)+r;
        a=a/10;
        
    }
    if (t==rev)
    printf("given number is palindrone");
    else
    printf("given number is not palindrone");
}
