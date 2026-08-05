//unique number
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count;
    for(int i=0;i<n;i++)
    {
        count=0;
    for(int j=0;j<n;j++)
    {
        if(arr[i]==arr[j] && i!=j)
        {
            count=1;
        }
    }
        if(count==0)
        {
            printf("%d",arr[i]);
        }
    }
    
    return 0;
}