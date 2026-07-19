#include<stdio.h>
int main()
{
      int i,number[5],sum=0;

      for(i=0;i<5;i++)
      {
            scanf("%d",&number[i]);
      }
      int j;
      for(j=0;j<5;j++)
      {
            sum=sum+number[j];
      }
      printf("%d",sum);

      return 0;
}