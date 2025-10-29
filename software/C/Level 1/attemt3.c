#include<stdio.h>
int main()
{
    int a;
    int b;
    int sum;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<0 || b<0)
    {
        printf("Invalid\n");
    }
    else
    {
      sum=a+b;
      if(sum>6)
      {
        printf("YES");
      }
      else
      {
        printf("NO");
      }
    }
   return 0; 
}