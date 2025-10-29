#include<stdio.h>
int main()
{
    int h1,m1,time;
    scanf(" %d",&time);

    h1=time/100;
    m1=time%100;

    if(h1<0 || h1>23 || m1>60)
    {
        printf("Invalid railway time");
        return 0;
    
    }
    if(h1==0)
    {
        printf("12 Hour Time:12:00 AM");
    }
    if(h1<12 && h1>0)
    {
        printf("12 Hour Time:%d:%d AM",h1,m1);
    }
    if(h1==12)
    {
        printf("12 Hour Time:%d:%d PM",h1,m1);
    }
    if(h1>12)
   {
        printf("12 Hour Time:%d:%d PM",h1-12,m1);
   }
   return 0;
}