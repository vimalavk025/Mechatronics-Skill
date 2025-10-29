#include<stdio.h>
int main()
{
   int num;
   scanf("%d",&num);
   
   if(num==0)
   {
    printf("the number entered by you is:0\n");
   }
   else if(num>0)
   {
    printf("the number entered by you is a positive number\n");
   }
   else if(num<0)
   {
    printf("the number entered by you is negative number\n");
   }

   return 0;
}