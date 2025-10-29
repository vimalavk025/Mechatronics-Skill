#include <stdio.h>
int main()
{
    int a;
    printf("enter any number");
    scanf("%d", &a);
    if(a<100)
    {
        printf("you written: %d" , a);
    }
    else
    {
        printf("above 100");
    }
    return 0;
}