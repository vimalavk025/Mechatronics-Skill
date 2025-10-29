#include<stdio.h>
int main()
{
    int a,b,c,s;
    scanf("%d",&a,&b,&c);

    if(a<=0 || b<=0 || c<=0)
    {
        printf("enter a valid  number");
        
    }
   
  

    else
    
    {

    if(s!=180)
    
    {
           printf("Invalid\n");
    }
    else
    {
        s=a+b+c;
        printf("it is a triangle");
    }
}
    return 0;
}