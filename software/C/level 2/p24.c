#include<stdio.h>
int main()
{
    int num,sum=0,i,a,temp,tot=0;

    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
    temp=i;
    sum=0;
    while(temp!=0)
    {
    a=temp%10;
    sum=sum*10+a;
    temp/=10;
    }
    if(sum==i)
    {
        tot+=i;
    }
    }
    printf("%d",tot);
    return 0;
}