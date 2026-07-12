#include <iostream>
using namespace std;

int main()
{
    long long num, original, temp, digit;
    long long sum = 0;

    cin >> num;

    if (num < 0)
    {
        cout << num << " is not a narcissistic number";
        return 0;
    }

    original = num;
    temp = num;

    int count = 0;

    if (temp == 0)
    {
        count = 1;
    }
    else
    {
        while (temp != 0)
        {
            count++;
            temp = temp / 10;
        }
    }

    temp = num;

    while (temp != 0)
    {
        digit = temp % 10;

        long long power = 1;

        for (int i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (num == 0)
    {
        sum = 0;
    }
    if (original == sum)
    {
        cout << original << " is a narcissistic number";
    }
    else
    {
        cout << original << " is not a narcissistic number";
    }

    return 0;
}