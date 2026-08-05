//removing even numbers
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
    int count;
    for(int i=0;i<n;i++)
    {
        count=0;
        if(arr[i]%2==0)
        {
          count=1;
        }
        if(count==0)
        {
            printf(" %d",arr[i]);
        }
    }
    return 0;
}