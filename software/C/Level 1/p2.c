#include<stdio.h>
#include<math.h>
int main()
{
     int t;
     long long int p;
     double r;
     long double a,s;
     scanf("%lld %lf %d",&p,&r,&t);
     
    s=pow(2,31)-1;

     if(r<1.0 || r>8.5)
     {
        printf("Intrest rate must be between 1.0 and 8.5");
        return 0;
     }
     if(p<1 || p>s)
     {
        printf("principal amount must be between 1 and %Lf",s);
        return 0;
     }

     a=p* pow((1+r/100.0),t);

     printf("A=%.2Lf",a);

     return 0;

}