#include<stdio.h>
int main()
{
    int num,sum=0,i,a;

    scanf("%d",&num);

    for(i=1;i<num;i++)
    {
        a=num%i;
        if(a==0)
        {
            sum+=i;
        }
    }
    if(sum==num)
    {
        printf("%d",sum/2);
    }
    else
    {
        printf("%d",num);
    }
    return 0;
}