#include<stdio.h>
int main()
{
    int a,h,r;
    float q;
    scanf("%d %d %d",&a,&h,&r);

    if(a==1)
    {
        q=(1.0/3)*3.14*r*r*h;
        printf("%.2f\n",q);

    }
    else if(a==2)
    {
        q=(1.0/3)*r*h;
        printf("%.2f\n",q);
    }
    else if(a==3)
    {
        q=(1.0/3)*r*r*h;
        printf("%.2f\n",q);
    }
    else
    {
        printf("Invalid option\n");
    }
    return 0;
    
}