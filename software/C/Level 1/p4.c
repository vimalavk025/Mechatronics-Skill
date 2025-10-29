#include<stdio.h>
int main()
{
    long long int c,s,p;
    scanf("%lld %lld",&c,&s);

    p=c-s;
    
    if(p<0)
    {
        printf("loss ");
        printf("profit=%lld",p);
    }
    else if(p>0)
    {
        printf("profit ");
        printf("loss=%lld",p);
    }
    else if(p==0)
    {
        printf("no profit no loss");
    }

    else
    {
        printf("invalid input");
    }
}