#include <stdio.h>
int main()
{
    float amount;
    printf("Enter the purchase amount:");
    scanf("%f",&amount);
    if (amount>50)
    {
        printf("%.2f Free shipping",amount);
    
    }
    else if (amount<50)
    {
        printf("%.2f Shipping fee is $5 ",amount);
    }
    else
    {
        printf("Invalid amount");
    }
    return 0;
}
