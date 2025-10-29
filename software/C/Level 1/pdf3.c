#include<stdio.h>
int main()
{
    int month;
    
    scanf(" %d",&month);

    if(month==1 || month==3 || month==5 || month==7 ||month==8 || month==9 || month==11)
    {
        printf("the month given by you has 31 days");
    }
    else if(month==2)
    {
         printf("the month given by you has 29 days");
    }
    else if(month==4 || month==6 || month==10 || month==12)
    {
        printf("the month you gave has 30 days");
    }
    else 
    {
        printf("enter a valid month");
    }
    return 0;
}