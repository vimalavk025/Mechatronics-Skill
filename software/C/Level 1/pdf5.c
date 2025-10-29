#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    if(num<0)

    {
        printf("enter a valid steps\n");
    }
    else if(num>2000 && num<10000)
    {
        printf("you are soo fit\n");
    }
    else if (num<2000 && num>0)
    {
        printf("please exersise and make your body fit\n");
    }
    return 0;
}
    
