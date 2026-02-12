#include<stdio.h>
int main()
{
    int n, i, j;
    char ch = 'A';
    scanf("%d", &n);
    if(n <= 0)
    {
        printf("Invalid");
    }
    else
    {
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= i; j++)
            {
                printf("%c", ch);
            }
            printf("\n");
            ch++;
        }
    }

    return 0;
}
