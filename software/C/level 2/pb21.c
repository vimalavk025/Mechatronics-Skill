#include <stdio.h>

int main()
{
    int num, temp, rev, rem;

    scanf("%d", &num);

    num++;

    while (1)
    {
        temp = num;
        rev = 0;

        while (temp > 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp = temp / 10;
        }

        if (rev == num)
        {
            printf("%d", num);
            break;
        }

        num++;
    }

    return 0;
}
