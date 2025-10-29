#include<stdio.h>
int main()
{
    int month;
    scanf("%d",&month);
    
    if(month<1 || month>12)
    {
        printf("invalid month\n");
    }
    else if(month==1 || month==3 || month==5|| month==7|| month==8 || month==10 || month==12 )
    {
        printf("The given month has thirty one days\n");
    }
    else if(month==2)

    {
        printf("the given month has twenty nine days\n");
    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
        printf("The given month has thirty days\n");
        
        return 0;
    }
}