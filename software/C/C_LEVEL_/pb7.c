#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0,num;
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(num==arr[i])
        {
           count+=1;
        }
    }
    printf("%d",count);
    return 0;

}