#include<stdio.h>
int main()
{
    int num,a,i,j,count=0,sum=0;

    scanf("%d",&num);

    for(i=num;count<5;i++)
    {
        j=i;
        sum=0;
        while(j!=0)
        {
            a=j%10;
            sum=sum*10+a;
            j/=10;
        }

        if(i==sum)
        {
            printf("%d ",i);
            count++;
        }
    }
    return 0;
}