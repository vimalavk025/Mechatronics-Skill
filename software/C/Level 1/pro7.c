#include<stdio.h>
int main()
{
    int num;

    scanf(" %d", &num);


    if(num<100000 && num>9999 || num>-100000 && num<9999)
    {
        printf("it is a five digit number");
    }

    else
    {
        printf("it is not a five digit number");
    }

    return 0;
}