#include<stdio.h>
int main()
{
    int num,i;

    scanf("%d",&num);
for(i=1;i<=num;i++)
{
    if(i%2==0 && num%2==0 )
    {
       printf(" %d",i*i);
    }
    else if(i%2!=0 && num%2!=0 )
    {
        printf(" %d",i*i);
    }
    
}
return 0;
}