#include<stdio.h>
int main()
{
    int num,temp,digit=0,divisor=1,lastnum,i,square;

    scanf("%d",&num);
    square=num*num;
    temp=num;

    while(temp>0)
    {
        digit++;
        temp=temp/10;
    }
    for(i=0;i<digit;i++)
    {
      divisor=divisor*10;
    }
    lastnum=square%divisor;

    if(num==lastnum)
    {
        printf("%d is a automorphic number",num);
    }
    else
    {
        printf("%d is not a automorphic number");
    }
    return 0;
}