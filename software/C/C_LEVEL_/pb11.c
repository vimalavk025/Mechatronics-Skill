#include<stdio.h>
int main()  
{
    int div,n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i;i<n;i++)
    {
        if(arr[i]%k==0)
        {
            count++;
        }
    }
    printf("%d",k);
    return 0;
}