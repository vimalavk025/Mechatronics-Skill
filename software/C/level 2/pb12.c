#include<stdio.h>
int main()
{
    int num,i,j,sum=0;
    scanf("%d",&num);
if(num<=0)
{
    printf("invalid inpiut");
}
else
{
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            printf(" #");
        }
        printf("\n");
    }
}
    return 0;
}