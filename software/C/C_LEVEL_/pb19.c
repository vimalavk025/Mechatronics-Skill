//second largest number
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
    int largest=arr[0];
    int secondlargest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]<largest)
        {
            secondlargest=arr[i];
        }
    }
    printf("%d",secondlargest);
    return 0;
}