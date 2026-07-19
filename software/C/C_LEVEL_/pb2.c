#include<stdio.h>
int main()
{
    int num[5],i,j,greatest;

    for(i=0;i<5;i++)
    {
          scanf("%d",&num[i]);
    }
    greatest=num[0];
    for(j=1;j<5;j++)
    {
        if(num[j]>greatest)
        {
            greatest=num[j];
        }
    }
     printf("%d",greatest);
    return 0;
}