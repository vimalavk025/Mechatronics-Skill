#include<stdio.h>
int main()
{
    int h1,m1,num;
    scanf("%d",&num);

    h1=num/100;
    m1=num%100;

    if(h1>=24 || h1<0 || m1<0 || m1>=60)
    {
        printf("Invalid railway time output");
    }
    else if(m1==0)
    {
        m1=00;
    }
    else if(h1==0)
    {
        printf("12-Hour Time:12:00 AM\n");
    }
    else if(h1<12)
    {
        printf("12-Hour Time:%d:%d AM\n",h1,m1);
    }
    else if(h1==12)
    {
       printf("12-Hour Time:12:00 PM\n");
    }
    else if(h1>12)
    {
    printf("12-Hour Time:%d:%d%d PM\n",h1-12,m1);
    }
    return 0;
}