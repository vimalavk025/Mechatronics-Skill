#include<stdio.h>
int main()
{
    int num1,num2,sum=0,i,c;
    scanf("%d %d",&num1,&num2);
    c=num1;
    for(i=1;i<=num2;i++)
    {
        printf("%d",num1);

        if(i!=num2)
        {
            printf("+");
        }
        sum+=num1;
        num1=num1*10+c;
    }
    printf("\n%d",sum);
    return 0;

}