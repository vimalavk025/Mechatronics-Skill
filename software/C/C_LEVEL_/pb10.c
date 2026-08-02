#include<stdio.h>
int main()
{
    int n,max,min,diff;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=0;i<n;i++)
    {
      if(arr[i]>max)
      {
        max=arr[i];
      }
      if(arr[i]<min)
      {
        min=arr[i];
      }

    }
    diff=max-min;
    printf("%d is minimum",min);
    printf("\n %d is the max",max);
    printf("\n %d is the diffrence",diff);
    return 0;
}