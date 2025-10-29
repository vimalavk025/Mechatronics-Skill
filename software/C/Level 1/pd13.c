#include<stdio.h>
int main()
{
    int age;
    scanf("%d",&age);

    if(age<0)
    {
        printf("invalid age\n");
    }

    else if(age>0 && age<5)
    {
        printf("half ticket for you rupeee 20\n");
    }

   else if(age>5 && age<=18);

    {
    printf("RUPEE 30\n");
    }

    else (age>18)
    {
        printf("the cost of your ticket is 50\n");
    }
       return 0;
       
}