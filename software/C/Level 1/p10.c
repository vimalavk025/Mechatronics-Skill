#include<stdio.h>
int main ()
{
    double da,hra,bs,gra;

    scanf(" %lf",&bs);
    
    if(bs<=0 || bs<=2147483647)
    {
        printf("invalid salary\n");
        return 0;
    }
    else if(bs<=10000)
    {
        hra=0.20*bs;
        da=0.80*bs;
    }
    else if(bs>10001 && bs<20000)
    {
        hra=0.25*bs;
        da=0.90*bs;
    }
    else if(bs>20001)
    {
        hra=0.30*bs;
        da=0.95*bs;
    }
    gra=hra+da+bs;
    printf("gross salary=%lf",gra);

return 0;
}