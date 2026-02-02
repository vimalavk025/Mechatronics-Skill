#include<stdio.h>
int main()
{
    int a,num1=0,num2=1,num,i;
    scanf ("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d",num1);
        a=num1+num2;
        num1=num2;
        num2=a;
    }
    return 0;
}