#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,fh=0,sh=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n%2==0)
    {
        for(int i=0;i<n/2;i++)
        {
              fh+=arr[i];
        }
        for(int i=n-1;i>=n/2;i--)
        {
            sh+=arr[i];
        }
    }
    else
    {
        for(int i=0;i<n/2;i++)
        {
            fh+=arr[i];
        }
        for(int i=n-1;i>n/2;i--)
        {
            sh+=arr[i];
        }
    }
    int diffrence=abs(sh-fh);
    printf("%d",diffrence);
    return 0;
}