#include<stdio.h>
int main()
{
    int num,d1,d2,d3,d4,sum;
    scanf("%d",&num);

    if(num<1000 || num>9999)
    {
        printf("enter a valid 4 digit number \n");
    }
    else
    {

    d1=num%10;

    num=num/10;

    d2=num%10;

    num=num/10;

    d3=num%10;

    num=num/10;

    d4=num%10;

    sum=d1+d2+d3+d4;

    printf("%d",sum);
    }
    return 0;
}