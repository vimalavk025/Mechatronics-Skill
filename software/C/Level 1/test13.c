#include<stdio.h>
int main()
{
    int length,breath;
    scanf("%d %d",&length,&breath);

    if(length<=0 || breath<=0)
    {
        printf("Shape:Invalid\n");
        printf("Area:Invalid\n");
    }
    else if(length==breath)
    {
       printf("Shape:Square\n");
       printf("Area:%d",length*length);
    }
    else
    {
        printf("Shape:Rectangle\n");
        printf("Area:%d",length*breath);
    }
    return 0;
}