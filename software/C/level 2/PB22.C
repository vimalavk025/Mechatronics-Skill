#include <stdio.h>

int main()
{
    int num, temp, rev, digit, count = 0;

    scanf("%d", &num);

    while (count < 5)
    {
        temp = num;
        rev = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }

        if (rev == num)
        {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    return 0;
}
