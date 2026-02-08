#include<stdio.h>
int main()
{
    int num,sum=1,i,j;
    scanf("%d",&num);
if(num<=0)
{
    printf("Invalid");
}
else
{
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",sum);
            sum++;
        }
        printf("\n");
    }
}    
    return 0;
}