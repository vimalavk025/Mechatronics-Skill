#include<stdio.h>
#include<math.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    int sum=0,a;
 if(num<=0)
    {
        printf("invalid input");
    }
else
{
    for(i=0;i<=num;i++)
    {
        a=i*i;
        sum+=a;
    }
        printf("%d",sum);
}   
    return 0;
}