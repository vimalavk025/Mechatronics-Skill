#include<stdio.h>
int main()
{
    int num,num1,i,count=1;
    scanf("%d %d",&num,&num1);
     printf("%d",num1);
         
     for(i=1;count<5;i++)
     {
        if(i%2==0)
        {
        printf(" %d",num1*i);
        count++;
        }
     }
     return 0;
}