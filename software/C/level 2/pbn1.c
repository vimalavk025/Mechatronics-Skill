#include<stdio.h>
int main()
{
    int num,a,j,i,b,sum=1;
    scanf("%d",&num);
    for(i=num+1;sum<5;i++)
    {
        for(j=2;j<i;j++)
        {
        a=i%j;
        b=0;
        
        if(a==0)
        {
           b=1;
        }
        break;
    }
        if(b==0)
        {
            printf("\n%d",i);
            sum+=1;
        }
        
        
    }
    return 0;
}