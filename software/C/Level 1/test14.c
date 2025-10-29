#include<stdio.h>
int main()
{
    int n,d;
    scanf("%d %d",&n,&d);

    if(n<=0)
    {
        printf("Invalid dice roll\n");
    }
    else if(d<=0)
    {
        printf("Invalid position of the player\n");
    }
    else if(n%2==0)
    {
        printf("Player moves backward %d units", d/3);
    }
    else if(n%2==1)
    {
        printf("Player moves forward %d units\n", 3*d);
    }
    return 0;
}