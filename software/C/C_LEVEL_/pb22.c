#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0,k;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k&&count==0)
        {
            count++;
            continue;
        }
            printf("%d",arr[i]);
        
    }
    return 0;
}