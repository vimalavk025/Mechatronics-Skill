#include<stdio.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
            if(count!=2)
            {
                printf("%d",arr[i]);
            }
            if(count==2)
            {
                printf("%d",arr[i]);
            }
        
    }
    return 0;
}