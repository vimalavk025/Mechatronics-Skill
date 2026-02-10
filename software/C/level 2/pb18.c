#include<stdio.h>
int main()
{
    int num,sum=0,a,d,i,l=0;
    scanf("%d",&num);
    d=num;

    for(i=num;num!=0;i++)
    {
    a=num%10;
    sum=a*a*a;
    l+=sum;
    num/=10;
    }


if(d==l)
{
    printf("%d is a narcissistic number",d);
}
else
{
    printf("%d is not a narcissistic number",d);
}
return 0;
}