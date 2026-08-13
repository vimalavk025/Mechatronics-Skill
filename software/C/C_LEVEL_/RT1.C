#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    float div=sum/n;
    printf("%.2f",div);
    return 0;
}