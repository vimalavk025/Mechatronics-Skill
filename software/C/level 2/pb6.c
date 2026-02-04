#include<stdio.h>
int main()
{
    int num1,sum=0,i;
    scanf("%d",&num1);

    for(i=1;i<num1;i++)
    {
        if(num1%i==0)
        {
        printf("%d ",i);
        sum+=i;
        }
    }
    if(sum>num1)
    {
        printf("\n%d is a abudant number");
    }

    else
    {
        printf("\n%d is not a abudant number");
    }
    return 0;
}