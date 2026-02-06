#include<stdio.h>
int main()
{
    int num,i;
    float sum=0,a,b;

    scanf("%d",&num);
    if(num<=0)
    {
        printf("invalid input");
    }
    else
    {
    for(i=1;i<=num;i++)
    {
        a=1.0/i;
        sum+=a;
    }
    printf("%.2f ",sum);
    }
    return 0;
}
