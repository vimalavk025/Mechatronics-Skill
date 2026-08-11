#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,mindiff=999999,fh=0,sh=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        int fh=0,sh=0;
        for(int j=0;j<i;j++)
        {
            fh+=arr[j];
        }
        for(int j=i+1;j<n;j++)
        {
            sh+=arr[j];
        }
        int diffrence=abs(fh-sh);

        if(diffrence<mindiff)
        {
            mindiff=diffrence;
        }
    }
    printf("%d",mindiff);
    return 0;
}