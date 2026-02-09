#include<stdio.h>
int main()
{
    int num,sum,i;
    scanf("%d",&num);

    if(num<=0)
    {
        printf("Invalid");
    }
    else
    {
        for(i=num;i<=num+3;i++)
        {
            sum=i*i*i;
         printf("\n %d",sum);
        }
        
    }
    return 0;
}
