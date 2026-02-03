#include<stdio.h>
int main()
{
    int i,j,num,sum,a;
    float add;

    scanf("%d",&num);

    for(i=2;i<num;i++)
{
    if(num%i==0)
    {
        a=1;
    }
    else
    {
       a==0;
    }
}
    if(a==1)
    {
        printf("%d is composite",num);
    }
    else
    {
         printf("%d is prime",num);
    }
return 0;
}