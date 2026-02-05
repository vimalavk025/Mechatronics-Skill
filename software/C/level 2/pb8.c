#include<stdio.h>
int main()
{
    float sum,i,a,b=1.0;
    int num;

    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        a=1.0/b;
        b=b*2;
        sum+=a;

    }
    if(a<=0)
    {
        printf("0.00");
    }
    else
    {
        printf("%.2f",sum);
    }
    return 0;
}