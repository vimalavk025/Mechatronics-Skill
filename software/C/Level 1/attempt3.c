#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a<60)
    {
        printf("%2.f is too cold to drink. Reheat the coffee\n",(float)a);
    }
    if(a>=60 && a<=70)
    {
        printf("%.2f is in optimal teemperrature. Enjoy your coffe\n",(float)a);
    }
    if(a>70)
    {
        printf("%2f coffee is soo hot. Wait for few minuites\n",(float)a);
    }
    return 0;
}