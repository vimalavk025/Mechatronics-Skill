#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int clossum=INT_MAX,cursum,num1,num2;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            cursum=arr[i]+arr[j];
            if(abs(cursum)<abs(clossum))
            {
                clossum=cursum;
                num1=arr[i];
                num2=arr[j];

            }
        }
    }
    printf("%d",num1);
    printf("%d",num2);
    return 0;

}