//WACP ON AMSTRONG.//
#include <stdio.h>
int main()
{
   int a,t=0,s=0,r;
   
    printf("enter the number");
    scanf("%d",&a);
    t=0;
    while(a!=0)
    {
        r=a%10;
        r=s+(r*r*r);
        a=a/10;
    }
     if(t==s)
        printf("it is amstrong number");
        else
        printf("it is not an amstrong number");
    
}

