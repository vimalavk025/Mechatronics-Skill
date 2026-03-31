#include<stdio.h>
int main()
{
    int num,sum=0,som=0,i;

    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
        else
        {
            som+=i;
        }
    }
    printf("%d ",som);
    printf("\n%d ",sum);
    return 0;
}