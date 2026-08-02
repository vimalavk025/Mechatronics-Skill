//sum and product of given number
#include<stdio.h>
int main()
{
    int n,sum=0,pro=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        pro=pro*arr[i];
    }
    printf("%d is the sum",sum);
    printf("\n%d is the product",pro);
    return 0;
}