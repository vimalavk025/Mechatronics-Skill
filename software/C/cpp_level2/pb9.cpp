#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x, term = 1.0, sum = 0.0;
    int n;

    cin >> x >> n;

    if (x < 0 || n < 0)
    {
        cout << fixed << setprecision(2) << 0.00;
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        sum = sum + term;
        term = term * x;
    }

    cout << fixed << setprecision(2) << sum;

    return 0;
}