//non prime number
#include<stdio.h>
int main()
{
    int n,prime;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int prime=0;
        for(int j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                prime=1;
            }
        }
        if(prime==1)
    {
        printf(" %d",arr[i]);
    }
    }
        return 0;
}