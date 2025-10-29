#include<stdio.h>
int main ()
{
    double sbase,sbonus,sallowance,e;
    double s,stotal,p;
    scanf("%lf %lf %lf %lf",&sbase,&sbonus,&sallowance,&e);

    if(sbase<0 || sbonus<0)
    {
        printf("stotal=0\n");
        printf("s=0\n");
        printf("p=undifined\n");
    }
    else
    {
        stotal=sbase+sbonus+sallowance;
        s=stotal-e;
        p=s/stotal*100;
        
        printf("stotal=%.2f\n",stotal);
        printf("s=%.0f\n",s);
        printf("p=%.0f % \n",p);

    }
    return 0;
}