#include<stdio.h>
int main()
{
    int num,sum=0,som=0,a,b,i;

    scanf("%d",&num);

    for(i=num;num!=0;i++)
    {
        a=num%10;
        num/=10;
        if(a%2==0)
        {
            sum+=a;
        }
        else
        {
            som+=a;
        }
    }
    printf("%d sum of odd numbers in given number",som);
    printf("\n%d sum of even numbers in given number",sum);
    return 0;
}