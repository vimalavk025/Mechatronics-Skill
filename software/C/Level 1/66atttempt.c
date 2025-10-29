#include<stdio.h>
int main ()
{
    float intialcost,currentstock,purchaseprice,profitloss;
    scanf("%f %f %f",&intialcost,&currentstock,&purchaseprice);
    profitloss=purchaseprice-currentstock*intialcost/100;

    if( profitloss==0)
    {
        printf("No profit no loss\n");
    }
    else if( profitloss<0)
    {
        printf("loss\n");
        printf("%.2f",- profitloss);
    }
    else if( profitloss>0)
    {
        printf("profit\n");
        printf("%.2f",profitloss);
    }
    return 0;

}