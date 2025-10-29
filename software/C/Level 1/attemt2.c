#include <stdio.h>
int main()
{
    float a,b;

    scanf("%f %f",&a,&b);
    
    if(a==0 && b==0)
    {
        printf("Infinite solution");
    }
    else if(a==0 && b!=0)
    {
        printf("No  solution");
    }
    else
    {
        printf("X=%.2f",-b/a);
    }
    return 0;

}