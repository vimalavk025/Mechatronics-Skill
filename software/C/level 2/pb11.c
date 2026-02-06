#include<stdio.h>
int main()
{
    int num,a,i,sum=0;
    scanf("%d",&num);
    
    if(num==0)
    {
        printf("1");
    }
    else
     for(i=num;num!=0;i++)
     {
        a=num%10;
        sum++;
        num=num/10;
     }
     printf("%d ",sum);
     return 0;
}