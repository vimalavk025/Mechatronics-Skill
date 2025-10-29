#include<stdio.h>
int main()

{
    int num;
    int d1,d2,d3,d4;
     int odd_sum=0,even_sum=0;

    scanf("%d",&num);
     
     
    d1= num % 10;     
    num= num/10;   
    d2=num % 10;
    num=num / 10;  
    d3=num%10;
    num=num/10;
    d4=num%10;

    if (d1 % 2 == 0) 
    {
    even_sum += d1;
    }
    else 
    odd_sum += d1;

    if (d2 % 2 == 0)
    { 
    even_sum += d2; 
    }
    else
    {
     odd_sum += d2;
    }
    if (d3 % 2 == 0) 
    {
    even_sum += d3; 
    }
    else 
    {
    odd_sum += d3;
    }

    if (d4 % 2 == 0)
    { 
    even_sum += d4;
    }

     else
     { 
     odd_sum += d4;
     }

     printf("Sum of even digits: %d\n", even_sum);
        printf("Sum of odd digits: %d\n", odd_sum);

        return 0;
    } 


    
