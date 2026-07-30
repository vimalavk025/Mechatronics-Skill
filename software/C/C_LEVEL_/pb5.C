#include<stdio.h>
int main()
{
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    if(n==1)
    {
        printf("%d",arr[0]);
    }
   if(arr[0]>=arr[1])
    {
        printf(" %d",arr[0]);
    }
    if(arr[n-1]>=arr[n-2])
    {
        printf(" %d",arr[n-1]);
    }
    for(i=1;i<n-1;i++)
    {
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
        {
            printf(" %d",arr[i]);
        }
    }
    return 0;
}