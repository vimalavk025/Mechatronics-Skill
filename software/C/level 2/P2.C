#include <stdio.h>
int main() 
{
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int num = 1;
    for (int i = 1; i <= n; i++) 
    {
        for (int s = 0; s < n - i; s++)
        {
            printf("   ");
        }

        for (int j = 0; j < i; j++) {
            printf("%3d", num++);
            if (j < i - 1) printf("\t"); 
        }

        printf("\n");
    }
    return 0;
}