#include<stdio.h>
int main()
{
    int num,sum=0,som=0,i;
    scanf("%d",&num);

    if(num<=0)
    {
        printf("Invalid");
    }
    else
    {
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
        printf("%d odd",som);
        printf("\n%d even",sum);
}
    return 0;
}