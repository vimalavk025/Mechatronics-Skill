#include<stdio.h>
int main()
{
    int n=5;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
  int sum=0;
    for(i=0;i<n;i++)
    {
        sum=arr[i]+sum;
    }
   float avg;
    avg=(float)sum/n;
    printf("%.2f",avg);
    return 0;
}