#include<stdio.h>
int main()
{
    
    int num;
    int d1,d2,d3,d4;
     int sum;

    scanf("%d",&num);

    if(num<999 || num>10000)
    {
        printf("enter a four digit number\n");
    }
    else
     {
    d1= num%10;

    num= num/10;

    d2=num%10;

    num=num/10; 

    d3=num%10;

    num=num/10;

    d4=num%10;

    sum=d1+d2+d3+d4;

    printf("the sum of the given numbers:%d \n",sum);
     }

    return 0;
}