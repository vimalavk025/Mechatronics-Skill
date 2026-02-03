#include<stdio.h>
int main()
{
    int num,sum=0,add,i,j;
    scanf("%d",&num);
    for(i=num;5>sum;i++)
{
        add=0;

        for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            add++;
            break;
        }
    }
    
    if(add==0)
    {
        printf("\n %d",i);
        sum++;
    }
}
    return 0;
}