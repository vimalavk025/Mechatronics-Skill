#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,s6,avg;
    printf("enter all your mark:");
    scanf("%d,%d,%d,%d,%d,%d",&s1,&s2,&s3,&s4,&s5,&s6);

    avg=s1+s2+s3+s4+s5+s6;

    if(avg>=95)
    {
        printf("A");
    }
    else if(avg>=85 && avg<95)
    {
        printf("B");
    }
    else if(avg>=75 && avg<85)
    {
        printf("c");
    }
    else if(avg>65 && avg<75)
    {
        printf("D");
    }
    else if(avg>45 && avg<65)
    {
        printf("E");
    }
    else
    {
        printf("F");
    }
    return 0;
}