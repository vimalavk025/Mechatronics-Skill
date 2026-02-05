#include<stdio.h>
int main()
{
    int year,i,sum=0,som=0;
    scanf("%d", &year);

    if((year%400==0)||(year%4==0 && year%100!=0))
    {
        printf("%d is a leep year",year);
    }
    else
    {
        printf("\n%d is not a leap year",year);
    }

    for(i=year+1;i<=year+10;i++)
    {
        if((i%400==0)||(i%4==0 && i%100!=0))
        {
            sum+=1;
        }
        else
        {
            som+=1;
        }
    }
    printf("\nNO OF LEAP YEARS:%d ",sum);
    printf("\nNO OF NON LEAP YEARS:%d ",som);
    return 0;
}
