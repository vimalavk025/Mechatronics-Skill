#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num,i;
    cin>>num;
    float n,a,sum=0;
    for(i=1;i<=num;i++)
    {
        n=1.0/i;
        sum+=n;
    }
    cout<<fixed<<setprecision(2)<<sum;
    return 0;
}